#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int pil,pil1,yt1,pil2,yt2,thnp,trans,kvouc,i,no,rek,stat;
long keluar,transf,kodep,*pengeluaran;
char bahasa,*pin[7],*pinn[7],*pinb[7],*pinb1[7],*norek[10],*user,*usert,*nvouc[16],*nim[16],*nokar[16],*noref[16],*nop[16],buff[50];
FILE *fp, *fr[3]; time_t tx;
struct alamat{char jalan[50];char kota[50];char kodepos[6];};
struct nasabah{char no_rekening[11];char nama_lengkap[50];char pin[7];int saldo_terakhir;};struct nasabah a[5];
struct date {int tgl;int bln;int thn;};
struct time{int jam;int mnt;int dtk;};
struct transaksi{struct date;struct time;char aktivitas[50];};
struct transaksi *y;struct tm *waktu;

int utama();int menuutama();int n100000();int n300000();int bayar();int lanjutbayar();int voucher();int pendidikan();int zakat();
int kredit();int pajak();int angsuran();int pinjaman();int asuransi();int mandiri();int n500000();int n1000000();int penarikan();
int lainnya();int infosaldo_terakhir();int transfer();int ubahpin();int lanjutbayar2();int log_nasabah();

int main()
{
    system("cls");
    printf("\n\t\t\t\tN I L A M   A D E   P A N G E S T U\n");
    printf("\t\t\t   1   D 4    T E K N I K  K O M P U T E R    B\n");
    printf("\t\t\t\t      2 2 1 0 1 6 1 0 4 9\n");
    printf("====================================================================================================\n\n\n");
    printf("\t\t\t\t\tS E L A M A T   D A T A N G\n\n\t\t\t\t\t\t     D I\n\n\t\t\t\t\t     B A N K    A B C\n\n\n\n");
    printf("\t\t\tS I L A H K A N   M A S U K K A N   K A R T U    A N D A\n");
    printf("\t\t\t\t\tU N T U K   P E L A Y A N A N");
    Sleep(1000);
    system("cls");
    printf("\n\t\t\t\tS I L A H K A N   P I L I H   B A H A S A\n");
    printf("\t\t\t--------------------------------------------------------\n");
    printf("\t\t\t\t S E L E C T   Y O U R    L A N G U A G E\n\n\n\n\n\n\n");
    printf(" P E R H A T I A N !\t\t\t\t\t\t\tI N D O N E S I A ----->A\n\n");printf(" A K S E S\n\n");
    printf(" C A L L   A B C\n\n");
    printf(" H A N Y A   D I\t\t\t\t\t\t\tE N G L I S H --------->B\n\n");
    printf(" 1 4 0 0 0    A T A U\n\n 0 2 1   5 2 9 9 7 7 7 7");
    printf("\n\n\n\t\t\t\tT E K A N   C   U N T U K   B A T A L");
    printf("\n\t\t\t\t-------------------------------------");
    printf("\n\t\t\t\t    P R E S S   C   T O   V O I D");
    printf("\n ");
    scanf("%c",&bahasa);getch();
    if(bahasa=='C'){main();}
    else if(bahasa=='A'){utama();}
    else if(bahasa=='B'){utama();}
    else _Exit(0);
}

int utama()
{
	char id[11];
	int cpin = 0;

	fp=fopen("Nasabah.txt","r+");	i=0;
	while(fgets(buff, sizeof(buff), fp)!=NULL)	{
	if(buff[0]!='\n')	sscanf(buff, "%[^,],%[^,],%[^,],%d", a[i].no_rekening, a[i].nama_lengkap, a[i].pin, &a[i].saldo_terakhir); else i--;	i++;} fclose(fp);
	system("cls");getchar();
	if(bahasa=='A'){
        printf("\n\t\t\t\t   S E L A M A T   D A T A N G\n\n\t\t\t\t\t\tD I\n\n\t\t\t\t\t   B A N K    ABC\n\n\n\n");
        printf("\n\n\n\n\t\t\t\t    SILAHKAN MASUKKAN ID ANDA:\n\t\t\t\t\t\t");}
    else if(bahasa=='B'){
        printf("\n\t\t\t\t\t   W E L C O M E   \n\n\t\t\t\t\t\tT O\n\n\t\t\t\t\tB A N K    A B C\n\n\n\n");
        printf("\n\n\n\n\t\t\t\t  PLEASE ENTER YOUR ID NUMBER:\n\t\t\t\t\t");
    }
	gets(id);
	for (i = 0; i < 6; i++) {
		if (strcmp(id, a[i].no_rekening) == 0) {no=i;
			if (strcmp(a[i].pin, "blokir")==0) {
				if(bahasa=='A')printf("Maaf, Akun anda telah terblokir.\nSilahkan hubungi Customer Service kami.");
				else if(bahasa=='B')printf("Sorry, your account has been blocked.\nPlease contact our Customer Service.");
				Sleep(1000); utama();
			}else{
				for (cpin = 0; cpin < 3; cpin++) {
					system("cls");
					if(bahasa=='A'){
                        printf("\n\t\t\t\t   S E L A M A T   D A T A N G\n\n\t\t\t\t\t\tD I\n\n\t\t\t\t\t   B A N K    ABC\n\n\n");
                        printf("\n\n\n\n\t\t\t\t    SILAHKAN MASUKKAN PIN ANDA:\n\t\t\t\t\t\t");}
                    else if(bahasa=='B'){
                        printf("\n\t\t\t\t\t   W E L C O M E   \n\n\t\t\t\t\t\tT O\n\n\t\t\t\t\tB A N K    A B C\n\n\n\n");
                        printf("\n\n\n\n\t\t\t\t    PLEASE ENTER YOUR PIN:\n\t\t\t\t\t    ");
                    }
					gets(pin);
					if (strcmp(pin, a[i].pin) == 0){
						menuutama();}
					else {
                        if(bahasa=='A')printf("\nMaaf, Pin yang anda masukkan salah.");
                        else if(bahasa=='B')printf("\nSorry, Your entered PIN is wrong.");Sleep(2000);
					}
				}
				strcpy(a[i].pin, "blokir");
				if(bahasa=='A'){
                    printf("\n\nMaaf, Akun anda telah terblokir.\nDikarenakan kesalahan memasukkan PIN tiga kali.");
                    printf("\nSilahkan hubungi Customer Service kami.");}
                else if(bahasa=='B'){
                    printf("\n\nSorry, Your account has been blocked.\nBecause a mistake entering your PIN three times.");
                    printf("\nPlease contact our Customer Service.");}
				Sleep(2000); utama();
			}
			}
		}
        printf("\nMaaf, ID yang anda masukkan tidak terdaftar \nmohon masukkan ID anda dengan benar.");
        printf("\nAtau hubungi Customer Service kami bila terjadi masalah.");
		Sleep(2000); utama();
}
int log_nasabah()
{
    fp=fopen("Nasabah.txt","w+");	for(i=0; i<5; i++)	{fprintf(fp, "%s,%s,%s,%d\n", a[i].no_rekening, a[i].nama_lengkap, a[i].pin, a[i].saldo_terakhir);	}	fclose(fp);
}
int menuutama()
{
    system("cls");
    printf("\n=================================================================================================\n\n");
    if(bahasa=='A'){
        printf("\n\t\t\t\t\tM E N U     U T A M A \n\n");
        printf("\t\t\t\tP E C A H A N    U A N G   R P . 5 0 0 0 0");
        printf("\n\t\t\t\t------------------------------------------");
        printf("\n\n\t\t\t\t  T E K A N   0   U N T U K   B A T A L\n\n");
        printf("=================================================================================================\n\n\n\n\n");
        printf("1<----- 1 0 0 . 0 0 0 \t\t\t\t\t5 0 0 . 0 0 0 ---------------------------->5\n\n\n");
        printf("2<----- 3 0 0 . 0 0 0 \t\t\t\t\t1 0 0 0 . 0 0 0 -------------------------->6\n\n\n");
        printf("3<----- B A Y A R   /   B E L I\t\t\t\tP E N A R I K A N   J U M L A H   L A I N->7\n\n\n");
        printf("4<----- M A N D I R I   P R A B A Y A R \t\tT R A N S A K S I   L A I N N Y A -------->8\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\n\t\t\t\t\tM A I N   C O U R S E \n\n");
        printf("\t\t\t\tD E N O M I N A T I O N S   R P . 5 0 0 0 0");
        printf("\n\t\t\t\t------------------------------------------");
        printf("\n\n\t\t\t\t       P R E S S   0   T O   V O I D\n\n");
        printf("=================================================================================================\n\n\n\n\n");
        printf("1<----- 1 0 0 . 0 0 0 \t\t\t\t\t5 0 0 . 0 0 0 ---------------------------->5\n\n\n");
        printf("2<----- 3 0 0 . 0 0 0 \t\t\t\t\t1 0 0 0 . 0 0 0 -------------------------->6\n\n\n");
        printf("3<----- P A Y    /   B U Y\t\t\t\tO T H E R W I T H D R A W A L  A M O U N T>7\n\n\n");
        printf("4<----- M A N D I R I   P R A B A Y A R \t\tO T H E R   T R A N S A C T I O N S ------>8\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tE N T E R ----->");
    }
    scanf("%d",&pil);
    if(pil==0){utama();}
    else if(pil==1){n100000();}
    else if(pil==2){n300000();}
    else if(pil==3){bayar();}
    else if(pil==4){mandiri();}
    else if(pil==5){n500000();}
    else if(pil==6){n1000000();}
    else if(pil==7){penarikan();}
    else if(pil==8){lainnya();}
}

int n100000()
{
    system("cls");
    if (bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
    else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");Sleep(1000);
    if(a[no].saldo_terakhir<100000){
        system("cls");
        if(bahasa=='A'){
            printf("=================================================================================================\n\n\t\t\tS A L D O    A N D A     T I D A K    M E N C U K U P I\n\n=================================================================================================\n\n\n\n");}
        else if(bahasa=='B'){
            printf("=================================================================================================\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n=================================================================================================\n\n\n\n");}
    }else{
    a[no].saldo_terakhir-=100000;
    log_nasabah();	tx = time(NULL);	y=localtime(&tx);
    fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
    fprintf(fr[no], "%s,%s,\"Transaksi penarikan tunai Sebesar Rp 100000\"\n", __DATE__, __TIME__);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
    system("cls");
    if(bahasa=='A')printf("\t\t\t\t   T R A N S A K S I   B E R H A S I L\n\n\n\t\t\t\tS I S A    S A L D O    A N D A    A D A L A H\n\n\n");
    else if(bahasa=='B')printf("\n\n\n\n\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n\t\t\t\tY O U   A R E   R E M A I N I N G\n\n\n");
    printf("\t\t\t\t\t %ld \n\n",a[no].saldo_terakhir);}
    printf("=================================================================================================\n");
    if(bahasa=='A'){
        printf("\n\nI N G I N   T R A N S A K S I   L A I N    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t1 0 0 . 0 0 0 ------------>1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM E N U   U T A M A ------>2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tS E L E S A I ------------>3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\n\nW A N T  O T H E R   T R A N S A C T I O N S    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t1 0 0 . 0 0 0 ------------>1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM A I N   C O U R S E ---->2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tE N D -------------------->3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    scanf("%d",&yt1);
    if(yt1==1){n100000();}
    else if(yt1==2){menuutama();}
    else if(yt1==3){ _exit(0);}
    getch();
}

int n300000()
{
    system("cls");
    if (bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
    else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");Sleep(1000);
    if(a[no].saldo_terakhir<300000){
        system("cls");
        if(bahasa=='A'){
            printf("=================================================================================================\n\n\t\t\tS A L D O    A N D A     T I D A K    M E N C U K U P I\n\n=================================================================================================\n\n\n\n");}
        else if(bahasa=='B'){
            printf("=================================================================================================\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n=================================================================================================\n\n\n\n");}
    }else{
    a[no].saldo_terakhir-=300000;
    log_nasabah();	tx = time(NULL);	y=localtime(&tx);
    fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
    fprintf(fr[no], "%s,%s,\"Transaksi penarikan tunai Sebesar Rp 100000\"\n", __DATE__, __TIME__);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
    system("cls");
    if(bahasa=='A')printf("\t\t\t\t   T R A N S A K S I   B E R H A S I L\n\n\n\t\t\t\tS I S A    S A L D O    A N D A    A D A L A H\n\n\n");
    else if(bahasa=='B')printf("\n\n\n\n\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n\t\t\t\tY O U   A R E   R E M A I N I N G\n\n\n");
    printf("\t\t\t\t\t %ld \n\n",a[no].saldo_terakhir);}
    printf("=================================================================================================\n");
    if(bahasa=='A'){
        printf("\n\nI N G I N   T R A N S A K S I   L A I N    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t1 0 0 . 0 0 0 ------------>1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM E N U   U T A M A ------>2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tS E L E S A I ------------>3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\n\nW A N T  O T H E R   T R A N S A C T I O N S    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t1 0 0 . 0 0 0 ------------>1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM A I N   C O U R S E ---->2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tE N D -------------------->3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    scanf("%d",&yt1);
    if(yt1==1){n300000();}
    else if(yt1==2){menuutama();}
    else if(yt1==3){ _exit(0);}
    getch();
}

int bayar()
{
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t M E N U  B A Y A R   /   B E L I");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");
        printf("\n\n\n=================================================================================================\n\n\n\n");
        printf("1<----- V O U C H E R  H P\t\t\t\t\t\tP A J A K ------------->5\n\n\n");
        printf("2<----- P E N D I D I K A N\t\t\t\t\t\tA N G S U R A N ------->6\n\n\n");
        printf("3<----- Z A K A T  /   S E D E K A H   /   I N F A Q\t\t\tP I N J A M A N ------->7\n\n\n");
        printf("4<----- K A R T U   K R E D I T\t\t\t\t\t\tA S U R A N S I ------->8\n\n\n");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\t\t\t\t M E N U  P A Y    /   B U Y");
        printf("\n\n\t\t\t\tP R E S S   0   T O   V O I D");
        printf("\n\n\n=================================================================================================\n\n\n\n");
        printf("1<----- V O U C H E R  H P\t\t\t\tT A X -------------------------------->5\n\n\n");
        printf("2<----- E D U C A T I O N\t\t\t\tI N S T A L L M E N T   P A Y M E N T->6\n\n\n");
        printf("3<----- A L M S   /   I N F A Q\t\t\t\tL O A N ------------------------------>7\n\n\n");
        printf("4<----- C R E D I T    C A R D\t\t\t\tI N S U R A N C E -------------------->8\n\n\n");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    scanf("%d",&pil1);
    if(pil1==0){menuutama();}
    else if(pil1==1){voucher();}
    else if(pil1==2){pendidikan();}
    else if(pil1==3){zakat();}
    else if(pil1==4){kredit();}
    else if(pil1==5){pajak();}
    else if(pil1==6){angsuran();}
    else if(pil1==7){pinjaman();}
    else if(pil1==8){asuransi();}
    else _Exit(0);
}

int lanjutbayar()
{
    if(bahasa=='A'){
        printf("\n\nI N G I N   T R A N S A K S I   L A I N    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\tB A Y A R  /    B E L I ------->1\n\n\n");
        printf("\t\t\t\t\t\t\t\tM E N U   U T A M A ----------->2\n\n\n");
        printf("\t\t\t\t\t\t\t\tS E L E S A I ----------------->3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\n\nW A N T  O T H E R   T R A N S A C T I O N S    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM E N U   P A Y  /  B U Y >1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM A I N   C O U R S E ---->2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tE N D -------------------->3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    scanf("%d",&yt2);
    if(yt2==1){bayar();}
    else if(yt2==2){menuutama();}
    else if(yt2==3){_exit(0);}
}

int voucher()
{
    system("cls");pengeluaran=&keluar;
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t\t V O U C H E R   H P");
        printf("\n\n\t\t\t          T E K A N   0   U N T U K   B A T A L");
        printf("\n\n\n=================================================================================================\n\n\n\n");
        printf("1<----- X L    B E B A S\t\t\t\t\t\tA X I S --------------->5\n\n\n");
        printf("2<----- I M 3\t\t\t\t\t\t\t\tS M A R T F R E N ----->6\n\n\n");
        printf("3<----- M E N T A R I\t\t\t\t\t\t\t3 --------------------->7\n\n\n");
        printf("4<----- S I M P A T I\t\t\t\t\t\t\tE S I A --------------->8\n\n\n");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\t V O U C H E R   H P");
        printf("\n\n\t\t\t\t  P R E S S   0   T O   V O I D");
        printf("\n\n\n=================================================================================================\n\n\n\n");
        printf("1<----- X L    B E B A S\t\t\t\t\t\tA X I S --------------->5\n\n\n");
        printf("2<----- I M 3\t\t\t\t\t\t\t\tS M A R T F R E N ----->6\n\n\n");
        printf("3<----- M E N T A R I\t\t\t\t\t\t\t3 --------------------->7\n\n\n");
        printf("4<----- S I M P A T I\t\t\t\t\t\t\tE S I A --------------->8\n\n\n");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    scanf("%d",&pil2);
    if(pil2==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t P I L I H   N I L A I   V O U C H E R   H P");
        printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t S E L E C T   T H E   V O U C H E R   V A L U E");
        printf("\n\n\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("1<----- 2 5 0 0 0 \t\t\t\t\t\t\t\t5 0 0 0 0 ----->5\n\n\n");
    printf("2<----- 7 5 0 0 0 \t\t\t\t\t\t\t\t1 0 0 0 0 0 --->6\n\n\n");
    printf("3<----- 1 5 0 0 0 0 \t\t\t\t\t\t\t\t 2 0 0 0 0 0 -->7\n\n\n");
    printf("4<----- 3 0 0 0 0 0 \t\t\t\t\t\t\t\t 5 0 0 0 0 0 -->8\n\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&kvouc);
    if(kvouc==0){menuutama();}
    switch(kvouc){
    case 1 : keluar = 25000;break;
    case 2 : keluar = 75000;break;
    case 3 : keluar = 150000;break;
    case 4 : keluar = 300000;break;
    case 5 : keluar = 50000;break;
    case 6 : keluar = 100000;break;
    case 7 : keluar = 200000;break;
    case 8 : keluar = 500000;break;
    }
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t M A S U K K A N    N O M O R   H P");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t    E N T E R   T H E   P H O N E   N U M B E R");
        printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");
    }
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t ");
    scanf("%s",&nvouc);
    if(nvouc==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B E L I A N");
    else if(bahasa=='B')printf("\t\t\t\t P U R C H A S E    C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA            : %s", a[no].nama_lengkap);
        printf("\n\t\tVOUCHER         :");}
    else if(bahasa=='B'){
        printf("\t\tNAME            : %s",a[no].nama_lengkap);
        printf("\n\t\tVOUCHER         :");}
    switch(pil2)
    {
        case 1 : printf(" XL BEBAS");break;
        case 2 : printf(" IM3");break;
        case 3 : printf(" MENTARI");break;
        case 4 : printf(" SIMPATI");break;
        case 5 : printf(" AXIS");break;
        case 6 : printf(" SMARTFREN");break;
        case 7 : printf(" 3");break;
        case 8 : printf(" ESIA");break;
    }
    if(bahasa=='A'){
        printf("\n\t\tNOMOR HP        : %s",nvouc);
        printf("\n\t\tNILAI VOUCHER   : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\n\t\tPHONE NUMBER    : %s",nvouc);
        printf("\n\t\tVOUCHER VALUE   : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    scanf("%d",&yt1);
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");Sleep(1000);
        if(keluar>a[no].saldo_terakhir){
            system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");
        }
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi voucher ke nomor %s Sebesar Rp %ld\"\n", __DATE__, __TIME__,nvouc,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
            lanjutbayar();
    }
    else if(yt1==0){voucher();}
}

int pendidikan()
{
    system("cls");pengeluaran=&keluar;
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t\t P E N D I D I K A N");
        printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\t E D U C A T I O N");
        printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t\tM A S U K K A N\n\t\t\tK O D E   P E R U S A H A A N  /   I N S T I T U S I\n\n\n\n  ");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\tE N T E R -------------->");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\tL I H A T   K O D E ----->1");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\t\tE N T E R\n\t\t\t\tT H E   I N S T I T U T I O N   C O D E\n\n\n\n  ");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\tE N T E R -------------->");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\tS E   C O D E ---------->1");}
    printf("\n\n\t\t\t\t\t\t\t ");
    scanf("%ld",&kodep);
    if(kodep==0){menuutama();}
    else if(kodep==1){ system("cls");
      printf("\n\n\n\t\t10001 - POLITEKNIK ELEKTRONIKA NEGERI SURABAYA\n\n");
      printf("\t\t10002 - POLITEKNIK PERKAPALAN NEGERI SURABAYA\n\n");
      printf("\t\t10003 - INSTITUT TEKNOLOGI SEPULUH NOPEMBER\n\n");
      printf("\t\t10004 - UNIVERSITAS AIRLANGGA\n\n");
      printf("\t\t10005 - UNIVERSITAS NEGERI SURABAYA\n\n");
      printf("\t\t10006 - UPN VETERAN JAWA TIMUR\n\n");Sleep(1000);
      pendidikan();
    }
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\tM A S U K K A N    N O M O R   I N D U K   M A H A S I S W A");
        printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t   E N T E R    S T U D E N T   I D    N U M B E R");
        printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t ");
    scanf("%s",&nim);
    if(nim==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t M A S U K K A N    J U M L A H    P E M B A Y A R A N");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\tE N T E R    P A Y M E N T    A M O U N T");
        printf("\n\n\t\t\t\t      P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t ");
    scanf("%ld",&keluar);
    if(keluar==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B A Y A R A N");
    else if(bahasa=='B')printf("\t\t\t\t P A Y M E N T   C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA                       : %s",a[no].nama_lengkap);
        printf("\n\t\tPEMBAYARAN                 :");}
     else if(bahasa=='B'){
        printf("\t\tNAME                    : %s",a[no].nama_lengkap);
        printf("\n\t\tPAYMENT                 :");}
    switch(kodep)
    {
        case 10001 : printf(" 10001 - POLITEKNIK ELEKTRONIKA NEGERI SURABAYA");break;
        case 10002 : printf(" 10002 - POLITEKNIK PERKAPALAN NEGERI SURABAYA");break;
        case 10003 : printf(" 10003 - INSTITUT TEKNOLOGI SEPULUH NOPEMBER");break;
        case 10004 : printf(" 10004 - UNIVERSITAS AIRLANGGA");break;
        case 10005 : printf(" 10005 - UNIVERSITAS NEGERI SURABAYA");break;
        case 10006 : printf(" 10006 - UPN VETERAN JAWA TIMUR");break;
    }
    if(bahasa=='A'){
        printf("\n\t\tNOMOR INDUK MAHASISWA      : %s",nim);
        printf("\n\t\tJUMLAH PEMBAYARAN          : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\n\t\tSTUDENT ID NUMBER       : %s",nim);
        printf("\n\t\tPAYMENT AMOUNT          : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt1);
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
        if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
        else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi pendidikan oleh NIM : %s Sebesar Rp %ld\"\n", __DATE__, __TIME__,nim,keluar);	for(i=0; i<3; i++) fclose(fr[i]);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        lanjutbayar();
    }
    else if(yt1==0){pendidikan();}
}

int zakat()
{
    system("cls");pengeluaran=&keluar;
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t Z A K A T  /   S E D E K A H   /   I N F A Q");
        printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t A L M S  /   I N F A Q");
        printf("\n\n\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n");
    if(bahasa=='A')printf("\n\t\t\t\t\D A F T A R    P E N Y E D I A    J A S A\n\n\n\n");
    else if(bahasa=='B')printf("\n\t\t\t\t\L I S T   O F    S E R V I C E   P R O V I D E R\n\n\n\n");
    printf("1<----- P D .   A M A L   S C T V\t\t\t\tD .    D H U A F A   Z A K A T ->5\n\n\n");
    printf("2<----- B A Z N A S    Z A K A T\t\t\t\tZ I S  B M R I  Z A K A T ------>6\n\n\n");
    printf("3<----- B A Z N A S    I N F A Q\t\t\t\tZ I S  B M R I  I N F A Q ------>7\n\n\n");
    printf("4<----- D .    D H U A F A   Z A K A T\n\n");
    printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&pil2);
    if(pil2==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t M A S U K K A N    J U M L A H    P E M B A Y A R A N");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t      E N T E R    P A Y M E N T    A M O U N T");
        printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t");
    scanf("%ld",&keluar);
    if(keluar==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B A Y A R A N");
    else if(bahasa=='B')printf("\t\t\t\tP A Y M E N T   C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA               : %s",a[no].nama_lengkap);
        printf("\n\t\tPEMBAYARAN         :");}
     else if(bahasa=='B'){
        printf("\t\tNAME            : %s",a[no].nama_lengkap);
        printf("\n\t\tPAYMENT         :");}
    switch(pil2)
    {
        case 1 : printf(" P D .   A M A L   S C T V");break;
        case 2 : printf(" B A Z N A S    Z A K A T");break;
        case 3 : printf(" B A Z N A S    I N F A Q");break;
        case 4 : printf(" D .    D H U A F A   Z A K A T");break;
        case 5 : printf(" D .    D H U A F A   Z A K A T");break;
        case 6 : printf(" Z I S  B M R I  Z A K A T");break;
        case 7 : printf(" Z I S  B M R I  I N F A Q");break;
    }
    if(bahasa=='A'){
        printf("\n\t\tJUMLAH PEMBAYARAN  : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\n\t\tPAYMENT AMOUNT  : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt1);
    getch();
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi zakat Sebesar Rp %ld\"\n", __DATE__, __TIME__,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        lanjutbayar();
    }
    else if(yt1==0){zakat();}
}

int kredit()
{
    system("cls");pengeluaran=&keluar;
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t K A R T U     K R E D I T");
        printf("\n\n\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\t C R E D I T    C A R D");
        printf("\n\n\t\t\t\t  P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n");
    if(bahasa=='A')printf("\n\t\t\t\t\J E N I S    K A R T U   K R E D I T\n\n\n\n\n");
    else if(bahasa=='B')printf("\n\t\t\t\t\T Y P E S    O F    C R E D I T   C A R D\n\n\n\n\n");
    printf("1<----- C I T I B A N K\t\t\t\t\t\tB A N K    M A N D I R I ----->5\n\n\n");
    printf("2<----- S T A N D A R D    C H A R T E R E D\t\t\tB N I ------------------------>6\n\n\n");
    printf("3<----- A N Z\t\t\t\t\t\t\tH S B C ---------------------->7\n\n\n");
    printf("4<----- P E R M A T A\n\n");
    printf("\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&pil2);
    if(pil2==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t M A S U K K A N    1 6   D I G I T\n\n\t\t\t     N O .   K A R T U    K R E D I T   A N D A");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t   E N T E R    1 6   D I G I T\n\n\t\t\t  Y O U R   C R E D I T   C A R D   N U M B E R");
        printf("\n\n\t\t\t\t     P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t");
    scanf("%s",&nokar);
    if(nokar==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t M A S U K K A N    J U M L A H    P E M B A Y A R A N");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t       E N T E R    P A Y M E N T   A M O U N T");
        printf("\n\n\t\t\t\t     P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t");
    scanf("%ld",&keluar);
    if(keluar==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B A Y A R A N");
    else if(bahasa=='B')printf("\t\t\t\t P A Y M E N T   C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA                : %s",a[no].nama_lengkap);
        printf("\n\t\tJENIS               :");}
    else if(bahasa=='B'){
        printf("\t\tNAME                  : %s",a[no].nama_lengkap);
        printf("\n\t\tTYPES                 :");}
    switch(pil2)
    {
        case 1 : printf(" C I T I B A N K");break;
        case 2 : printf(" S T A N D A R D    C H A R T E R E D");break;
        case 3 : printf(" A N Z");break;
        case 4 : printf(" P E R M A T A");break;
        case 5 : printf(" B A N K    M A N D I R I");break;
        case 6 : printf(" B N I");break;
        case 7 : printf(" H S B C");break;
    }
    if(bahasa=='A'){
        printf("\n\t\tNOMOR KARTU         : %s",nokar);
        printf("\n\t\tJUMLAH PEMBAYARAN   : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\n\t\tCREDIT CARD NUMBER    : %s",nokar);
        printf("\n\t\tPAYMENT AMOUNT        : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt1);
    getch();
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi kartu kredit dengan nomor kartu %s Sebesar Rp %ld\"\n", __DATE__, __TIME__,nokar,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        lanjutbayar();
    }
    else if(yt1==0){kredit();}
}

int pajak()
{
    system("cls");pengeluaran=&keluar;
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t\t P A J A K    P B B");
        printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\t   T A X    P B B");
        printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A')printf("\t\t\t M A S U K K A N   N O M O R   O B J E K   P A J A K   A N D A\n\n\n\n");
    else if(bahasa=='B')printf("\t\t\t\t E N T E R    T A X   N U M B E R\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->\n\n\n\t\t\t\t\t\t");
    scanf("%ld",&nop);
    if(nop==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\tM A S U K K A N   T A H U N   P A J A K");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\t E N T E R    T A X   Y E A R");
        printf("\n\n\t\t\t\t\tP R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t\t ");
    scanf("%d",&thnp);
    if(thnp==0){menuutama();}
    else if(thnp>0){
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\tM A S U K K A N    J U M L A H     P E M B A Y A R A N");
        printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t E N T E R   P A Y M E N T   A M O U N T");
        printf("\n\n\t\t\t\t      P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t");
    scanf("%ld",&keluar);
    if(keluar==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B A Y A R A N");
    else if(bahasa=='B')printf("\t\t\t\t P A Y M E N T   C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA                : %s\n\n",a[no].nama_lengkap);
        printf("\t\tNOMOR PAJAK         :%ld\n\n",nop);
        printf("\t\tTAHUN PAJAK         :%d\n\n",thnp);
        printf("\t\tJUMLAH PEMBAYARAN   :%ld\n\n",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\t\tNAME              : %s",a[no].nama_lengkap);
        printf("\n\t\tTAX NUMBER        :%s\n",nop);
        printf("\t\tTAX YEAR          :%d\n",thnp);
        printf("\t\tPAYMENT AMOUNT   :%ld\n\n",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt1);
    getch();
    if(yt1==1){
       system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi pajak dengan nomor pajak %ld %d Sebesar Rp %ld\"\n", __DATE__, __TIME__,nop,thnp,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        lanjutbayar();
        }
        else if(yt1==0){pajak();}
    } else system("cls");
    if(bahasa=='A')printf("TAHUN YANG ANDA MASUKKAN INVALID");
    else if(bahasa=='B')printf("YOUR YEAR IS INVALID");Sleep(1000);pajak();
}

int angsuran()
{
    system("cls");pengeluaran=&keluar;
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t\tA N G S U R A N");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\tI N S T A L L M E N T   P A Y M E N T");
        printf("\n\n\t\t\t\t    P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n");
    if(bahasa=='A')printf("\t\t\t\t\tM A S U K K A N\n\t\t\tK O D E   P E R U S A H A A N  /   I N S T I T U S I\n\n\n\n  ");
    else if(bahasa=='B')printf("\t\t\t\t\t\tE N T E R\n\t\t\t\t   T H E  I N S T I T U T I O N   C O D E\n\n\n\n  ");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\tE N T E R -------------->");
    if(bahasa=='A')printf("\n\n\n\n\t\t\t\t\t\t\t\t\tL I H A T   K O D E ----->1");
    else if(bahasa=='B')printf("\n\n\n\n\t\t\t\t\t\t\t\t\tS E E   C O D E -------->1");
    printf("\n\n\t\t\t\t\t\t\t ");
    scanf("%ld",&kodep);
    if(kodep==0){menuutama();}
    else if(kodep==1){ system("cls");
      printf("\n\n\n\t\t20001 - ACC\n\n");
      printf("\t\t20002 - TUNAS FINANCIND0\n\n");
      printf("\t\t20003 - ADIRA FINANCE\n\n");Sleep(1000);
      angsuran();
    }
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t M A S U K K A N    N O M O R   R E F E R E N S I");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t E N T E R    R E F E R E N C E    N U M B E R");
        printf("\n\n\t\t\t\t\t  P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t\t ");
    scanf("%s",&noref);
    if(noref==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t M A S U K K A N    J U M L A H    P E M B A Y A R A N");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t E N T E R    P A Y M E N T   A M O U N T");
        printf("\n\n\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t\t ");
    scanf("%ld",&keluar);
    if(keluar==0){ menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B A Y A R A N");
    else if(bahasa=='B')printf("\t\t\t\t P A Y M E N T   C O F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA                 : %s",a[no].nama_lengkap);
        printf("\n\t\tPEMBAYARAN           :");}
    else if(bahasa=='B'){
        printf("\t\tNAME               : %s",a[no].nama_lengkap);
        printf("\n\t\tPAYMENT            :");}
    switch(kodep)
    {
        case 20001 : printf(" 20001 - ACC");break;
        case 20002 : printf(" 20002 - TUNAS FINANCIND0");break;
        case 20003 : printf(" 20003 - ADIRA FINANCE");break;
    }
    if(bahasa=='A'){
        printf("\n\t\tNOMOR REFERENSI      : %s",noref);
        printf("\n\t\tJUMLAH PEMBAYARAN    : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\n\t\tREFERENCE NUMBER   : %s",noref);
        printf("\n\t\tPAYMENT AMOUNT     : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");}
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt1);
    getch();
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi angsuran dengan nomor referensi %s Sebesar Rp %ld\"\n", __DATE__, __TIME__,noref,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        lanjutbayar();
    }
    else if(yt1==0){angsuran();}
}

int pinjaman()
{
    system("cls");pengeluaran=&keluar;
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t P I N J A M A N     B A N K");
        printf("\n\n\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\tL O A N    B A N K");
        printf("\n\n\t\t\t\t P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n");
    if(bahasa=='A')printf("\t\t\tD A F T A R   B A N K    P E N Y E D I A    J A S A\n\n\n\n\n");
    else if(bahasa=='B')printf("\t\t\t\t\L I S T   O F   B A N K   S E R V I C E   P R O V I D E R\n\n\n\n\n");
    printf("1<----- C I T I B A N K P L\n\n\n");
    printf("2<----- C I T I F I N A N C I A L\n\n\n");
    printf("3<----- A N Z   ( R D S )   P E R S O N A L    L O A N\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&pil2);
    if(pil2==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\tM A S U K K A N    N O    R E F E R E N S I");
        printf("\n\n\t\t\t\t  T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t   E N T E R    R E F E R E N C E   N U M B E R");
        printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t\t ");
    scanf("%s",&noref);
    if(noref==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t M A S U K K A N    J U M L A H    P E M B A Y A R A N");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\tE N T E R    P A Y M E N T   A M O U N T");
        printf("\n\n\t\t\t\t  P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t\t ");
    scanf("%ld",&keluar);
    if(keluar==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B A Y A R A N");
    else if(bahasa=='B')printf("\t\t\t\t P A Y M E N T   C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA              : %s",a[no].nama_lengkap);
        printf("\n\t\tPEMBAYARAN        :");}
    else if(bahasa=='B'){
        printf("\t\tNAME            : %s",a[no].nama_lengkap);
        printf("\n\t\tPAYMENT         :");}
    switch(pil2)
    {
        case 1 : printf(" C I T I B A N K P L");break;
        case 2 : printf(" C I T I F I N A N C I A L");break;
        case 3 : printf(" A N Z   ( R D S )   P E R S O N A L    L O A N");break;
    }
    if(bahasa=='A'){
        printf("\n\t\tNO REFERENSI      : %s",noref);
        printf("\n\t\tJUMLAH PEMBAYARAN : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\n\t\tREFERENCE NUMBER: %s",noref);
        printf("\n\t\tPAYMENT AMOUNT  : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    getch();
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi pinjaman bank dengan nomor referensi %s Sebesar Rp %ld\"\n", __DATE__, __TIME__,noref,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        lanjutbayar();
    }
    else if(yt1==0){pinjaman();}
}

int asuransi()
{
    system("cls");pengeluaran=&keluar;
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t\tA S U R A N S I");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\t   I N S U R A N C E");
        printf("\n\n\t\t\t\t P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n");
    if(bahasa=='A')printf("\t\t\t\t\t\tM A S U K K A N\n\t\t\tK O D E   P E R U S A H A A N  /   I N S T I T U S I\n\n\n\n  ");
    else if(bahasa=='B')printf("\t\t\t\t\t    E N T E R\n\t\t\t    T H E   I N S T I T U T I O N    C O D E\n\n\n\n  ");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\tE N T E R -------------->");
    if(bahasa=='A')printf("\n\n\n\n\t\t\t\t\t\t\t\t\tL I H A T   K O D E ----->1");
    else if(bahasa=='B')printf("\n\n\n\n\t\t\t\t\t\t\t\t\tS E E   C O D E -------->1");
    printf("\n\n\t\t\t\t\t\t\t ");
    scanf("%ld",&kodep);
    if(kodep==30000){ system("cls");
      printf("\n\n\n\t\t30001 - ASURANSI PRUDENTIAL\n\n");
      printf("\t\t30002 - ASURANSI AVRIST\n\n");
      printf("\t\t30003 - AXA MANDIRI\n\n");Sleep(1000);
      asuransi();
    }
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t M A S U K K A N    N O M O R   R E F E R E N S I");
        printf("\n\n\t\t\t      T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t   E N T E R    R E F E R E N C E   N U M B E R");
        printf("\n\n\t\t\t\tP R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t ");
    scanf("%s",&noref);
    if(noref==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t M A S U K K A N    J U M L A H    P E M B A Y A R A N");
        printf("\n\n\t\t\t\tT E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t     E N T E R    P A Y M E N T   A M O U N T");
        printf("\n\n\t\t\t          P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t ");
    scanf("%ld",&keluar);
    if(keluar==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B A Y A R A N");
    else if(bahasa=='B')printf("\t\t\t\t P A Y M E N T   C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA                 : %s",a[no].nama_lengkap);
        printf("\n\t\tPEMBAYARAN           :");}
    else if(bahasa=='B'){
        printf("\t\tNAME               : %s",a[no].nama_lengkap);
        printf("\n\t\tPAYMENT            :");}
    switch(kodep)
    {
        case 30001 : printf(" 30001 - ASURANSI PRUDENTIAL");break;
        case 30002 : printf(" 30002 - ASURANSI AVRIST");break;
        case 30003 : printf(" 30003 - AXA MANDIRI");break;
    }
    if(bahasa=='A'){
        printf("\n\t\tNOMOR REFERENSI      : %ld",noref);
        printf("\n\t\tJUMLAH PEMBAYARAN    : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\n\t\tREFERENCE NUMBER   : %s",noref);
        printf("\n\t\tPAYMENT AMOUNT     : %ld",*pengeluaran);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt1);
    getch();
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi asuransi dengan nomor referensi %s Sebesar Rp %ld\"\n", __DATE__, __TIME__,noref,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        lanjutbayar();
    }
    else if(yt1==0){asuransi();}
}

int mandiri()
{
   system("cls");pengeluaran=&keluar;
    if(bahasa=='A')printf("\n\t\t\t\t\t S I L A H K A N   P I L I H\n\n\t\t\t\t\tD E N O M I N A S I   A N D A\n\n\t\t\t\tT E K A N   0   U N T U K   K E M B A L I\n\n\n\n\n");
    else if(bahasa=='B')printf("\n\t\t\t\t\tP L E A S E   S E L E C T\n\t\t\t\t  Y O U R    D E N O M I N A T I O N\n\t\t\t\t   P R E S S   0   T O   V O I D\n\n\n\n\n");
    printf("\n\n\n1<-----5 0 0 0 0\t\t\t\t\t\t1 0 0 0 0 0 ------------------>4\n\n\n");
    printf("2<-----2 0 0 0 0 0\t\t\t\t\t\t3 0 0 0 0 0 ------------------>5\n\n\n");
    if(bahasa=='A')printf("3<-----5 0 0 0 0 0\t\t\t\t\t\tJ U M L A H   L A I N--------->6\n\n\n\n\n");
    else if(bahasa=='B')printf("3<-----5 0 0 0 0 0\t\t\t\t\t\tA N O T H E R   A M O U N T--->6\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&pil2);
    if(pil2==0){menuutama();}
    else if(pil2==6){
        system("cls");
        printf("=================================================================================================\n\n");
        if(bahasa=='A'){
            printf("\t\tS I L A H K A N    M A S U K K A N    J U M L A H     D E N O M I N A S I\n\n");
            printf("\t\t\t    D A L A M    K E L I P A T A N     5 0 0 0 0\n\n");
            printf("\t\t    M A K S I M U M     1 x     D E N O M I N A S I    2 5 0 0 0 0 0\n\n");
            printf("\t\t\t\t(T E K A N   0   U N T U K   B A T A L)\n");}
        else if(bahasa=='B'){
            printf("\t\tP L E A S E    E N T E R    N U M B E R    O F    D E N O M I N A T I O N\n\n");
            printf("\t\t\t        I N    M U L T I P L E S    5 0 0 0 0\n\n");
            printf("\t\t    M A K S I M U M     1 x     D E N O M I N A T I O    2 5 0 0 0 0 0\n\n");
            printf("\t\t\t\t    (P R E S S   0   T O   V O I D)\n");}
        printf("=================================================================================================\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t ");
        scanf("%ld",&keluar);
        if(keluar==0){menuutama();}
        else if(keluar%50000!=0&&keluar>2500000){mandiri();}
    }
    system("cls");
    if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
    else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");Sleep(1000);
    system("cls");
    if(bahasa=='A')printf("\n\n\n\n\n\t\t\t\tT E M P E L K A N   K A R T U\n\t\t\t\tP R A B A Y A R   A N D A");
    else if(bahasa=='B')printf("\n\n\n\n\n\t\t\t\tP A S T E     Y O U R\n\t\t\t\tP R E P A I D    C A R D");Sleep(1000);
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    P E M B E L I A N");
    else if(bahasa=='B')printf("\t\t\t\t P A Y M E N T   C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\n\t\tNAMA           : %s",a[no].nama_lengkap);
        printf("\n\t\tPEMBAYARAN     : DENOMINASI");
        printf("\n\t\tJUMLAH         :");}
    else if(bahasa=='B'){
        printf("\t\tNAME           : %s",a[no].nama_lengkap);
        printf("\n\t\tPAYMENT        : DENOMINATION");
        printf("\n\t\tPAYMENT AMOUNT :");}
    switch(pil2)
    {
        case 1 : printf(" 50000");keluar=50000;break;
        case 2 : printf(" 200000");keluar=200000;break;
        case 3 : printf(" 500000");keluar=500000;break;
        case 4 : printf(" 100000");keluar=100000;break;
        case 5 : printf(" 300000");keluar=300000;break;
        case 6 : printf(" %ld",*pengeluaran);break;
    }
    if(bahasa=='A'){
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt1);
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi denominasi Sebesar Rp %ld\"\n", __DATE__, __TIME__,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        if(bahasa=='A'){
            printf("\n\nI N G I N   T R A N S A K S I   L A I N    ?\n\n\n");
            printf("\t\t\t\t\t\t\t\tM A N D I R I  P R A B A Y A R->1\n\n\n");
            printf("\t\t\t\t\t\t\t\tM E N U   U T A M A ----------->2\n\n\n");
            printf("\t\t\t\t\t\t\t\tS E L E S A I ----------------->3\n\n\n");}
        else if(bahasa=='B'){
            printf("\n\nW A N T  O T H E R   T R A N S A C T I O N S    ?\n\n\n");
            printf("\t\t\t\t\t\t\t\t\tM E N U   P A Y  /  B U Y >1\n\n\n");
            printf("\t\t\t\t\t\t\t\t\tM A I N   C O U R S E ---->2\n\n\n");
            printf("\t\t\t\t\t\t\t\t\tE N D -------------------->3\n\n\n");}
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
        scanf("%d",&yt2);
        if(yt2==1){
            mandiri();
        }
        else if(yt2==2){
            menuutama();
        }
        else if(yt2==3){
            _exit(0);
        }
    }
}

int n500000()
{
    system("cls");
    if (bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
    else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");Sleep(1000);
    if(a[no].saldo_terakhir<500000){
        system("cls");
        if(bahasa=='A'){
            printf("=================================================================================================\n\n\t\t\tS A L D O    A N D A     T I D A K    M E N C U K U P I\n\n=================================================================================================\n\n\n\n");}
        else if(bahasa=='B'){
            printf("=================================================================================================\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n=================================================================================================\n\n\n\n");}
    }else{
    a[no].saldo_terakhir-=500000;
    log_nasabah();	tx = time(NULL);	y=localtime(&tx);
    fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
    fprintf(fr[no], "%s,%s,\"Transaksi penarikan tunai Sebesar Rp 100000\"\n", __DATE__, __TIME__);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
    system("cls");
    if(bahasa=='A')printf("\t\t\t\t   T R A N S A K S I   B E R H A S I L\n\n\n\t\t\t\tS I S A    S A L D O    A N D A    A D A L A H\n\n\n");
    else if(bahasa=='B')printf("\n\n\n\n\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n\t\t\t\tY O U   A R E   R E M A I N I N G\n\n\n");
    printf("\t\t\t\t\t %ld \n\n",a[no].saldo_terakhir);}
    printf("=================================================================================================\n");
    if(bahasa=='A'){
        printf("\n\nI N G I N   T R A N S A K S I   L A I N    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t5 0 0 . 0 0 0 ------------>1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM E N U   U T A M A ------>2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tS E L E S A I ------------>3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\n\nW A N T  O T H E R   T R A N S A C T I O N S    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t5 0 0 . 0 0 0 ------------>1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM A I N   C O U R S E ---->2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tE N D -------------------->3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    scanf("%d",&yt1);
    if(yt1==1){n500000();}
    else if(yt1==2){menuutama();}
    else if(yt1==3){ _exit(0);}
    getch();
}

int n1000000()
{
    system("cls");
    if (bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
    else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");Sleep(1000);
    if(a[no].saldo_terakhir<1000000){
        system("cls");
        if(bahasa=='A'){
            printf("=================================================================================================\n\n\t\t\tS A L D O    A N D A     T I D A K    M E N C U K U P I\n\n=================================================================================================\n\n\n\n");}
        else if(bahasa=='B'){
            printf("=================================================================================================\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n=================================================================================================\n\n\n\n");}
    }else{
    a[no].saldo_terakhir-=1000000;
    log_nasabah();	tx = time(NULL);	y=localtime(&tx);
    fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
    fprintf(fr[no], "%s,%s,\"Transaksi penarikan tunai Sebesar Rp 100000\"\n", __DATE__, __TIME__);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
    system("cls");
    if(bahasa=='A')printf("\t\t\t\t   T R A N S A K S I   B E R H A S I L\n\n\n\t\t\t\tS I S A    S A L D O    A N D A    A D A L A H\n\n\n");
    else if(bahasa=='B')printf("\n\n\n\n\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n\t\t\t\tY O U   A R E   R E M A I N I N G\n\n\n");
    printf("\t\t\t\t\t %ld \n\n",a[no].saldo_terakhir);}
    printf("=================================================================================================\n");
    if(bahasa=='A'){
        printf("\n\nI N G I N   T R A N S A K S I   L A I N    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t1 0 0 0 . 0 0 0 ------------>1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM E N U   U T A M A ------>2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tS E L E S A I ------------>3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    else if(bahasa=='B'){
        printf("\n\nW A N T  O T H E R   T R A N S A C T I O N S    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t1 0 0 0 . 0 0 0 ------------>1\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tM A I N   C O U R S E ---->2\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tE N D -------------------->3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");}
    scanf("%d",&yt1);
    if(yt1==1){n1000000();}
    else if(yt1==2){menuutama();}
    else if(yt1==3){ _exit(0);}
    getch();
}

int penarikan()
{
    system("cls");
    printf("=================================================================================================\n\n");
    if(bahasa=='A'){
        printf("\t\tS I L A H K A N    M A S U K K A N    J U M L A H     P E N A R I K A N\n\n");
        printf("\t\t\t    D A L A M    K E L I P A T A N     5 0 0 0 0\n\n");
        printf("\t\t    M A K S I M U M     1 x     P E N A R I K A N    2 5 0 0 0 0 0\n\n");
        printf("\t\t\t\t(T E K A N   0   U N T U K   B A T A L)\n");}
    else if(bahasa=='B'){
        printf("\t\tP L E A S E    E N T E R    N U M B E R    O F    W I T H D R A W A L\n\n");
        printf("\t\t\t    I N    M U L T I P L E S    5 0 0 0 0 \n\n");
        printf("\t\t   1 x   M A X I M U M     W I T H D R A W A L    2 5 0 0 0 0 0\n\n");
        printf("\t\t\t\t(P R E S S   0   T O   V O I D)\n");}
    printf("=================================================================================================\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t ");
    scanf("%ld",&keluar);
    if(keluar==0){menuutama();}
    else if((keluar%50000==0)&&(keluar<=2500000)){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-keluar;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi denominasi Sebesar Rp %ld\"\n", __DATE__, __TIME__,keluar);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(100);
            system("cls");
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t T R A N S A K S I   A N D A    T E L A H   B E R H A S I L");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("\n\n\n=================================================================================================\n\n\n\n");}
        if(bahasa=='A'){
            printf("\n\nI N G I N   T R A N S A K S I   L A I N    ?\n\n\n");
            printf("\t\t\t\t\t\t\t\tM A N D I R I  P R A B A Y A R->1\n\n\n");
            printf("\t\t\t\t\t\t\t\tM E N U   U T A M A ----------->2\n\n\n");
            printf("\t\t\t\t\t\t\t\tS E L E S A I ----------------->3\n\n\n");}
        else if(bahasa=='B'){
            printf("\n\nW A N T  O T H E R   T R A N S A C T I O N S    ?\n\n\n");
            printf("\t\t\t\t\t\t\t\t\tM E N U   P A Y  /  B U Y >1\n\n\n");
            printf("\t\t\t\t\t\t\t\t\tM A I N   C O U R S E ---->2\n\n\n");
            printf("\t\t\t\t\t\t\t\t\tE N D -------------------->3\n\n\n");}
        printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
        scanf("%d",&yt2);
        if(yt1==1){
            penarikan();
        }
        else if(yt1==2){
            menuutama();
        }
        else if(yt1==3){
            _exit(0);
        }
        getch();}
    else{
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tSILAHKAN MASUKKAN JUMLAH PENARIKAN \n\t\t\t\t\tDALAM KELIPATAN 50000\n\t\t\t\t   MAKSIMUM 1x PENARIKAN 2500000");
        else if(bahasa=='B')printf("\n\t\t\t\tPLEASE ENTER NUMBER OF WITHDRAWAL \n\t\t\t\t\tIN MULTIPLES 50000\n\t\t\t\t1x MAXIMUM WITHDRAWAL 2500000 ");Sleep(1000);
        penarikan();
    }
}

int lainnya()
{
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t M E N U  T R A N S A K S I  L A I N N Y A");
        printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\tM E N U  O T H E R    T R A N S A C T I O N");
        printf("\n\n\t\t\t\t P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("1<----- I N F O R M A S I   S A L D O\n\n\n");
        printf("2<----- T R A N S F E R\n\n\n");
        printf("3<----- U B A H   P I N\n\n\n");}
    else if(bahasa=='B'){
        printf("1<----- B A L A N C E   I N F O R M A T I O N\n\n\n");
        printf("2<----- T R A N S F E R\n\n\n");
        printf("3<----- C H A N G E   T H E   P I N\n\n\n");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&pil2);
    if(pil2==1){infosaldo_terakhir();}
    else if(pil2==2){transfer();}
    else if(pil2==3){ubahpin();}
    else _exit(0);
}
int infosaldo_terakhir()
{
    system("cls");
    printf("=================================================================================================\n\n");
    if(bahasa=='A')printf("\t\t\t\t I N F O R M A S I   S A L D O");
    else if(bahasa=='B')printf("\t\t\t\t B A L A N C E   I N F O R M A T I O N");
    printf("\n\n=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t S A L D O    R E K E N I N G    A N D A   A D A L A H");
        printf("\n\n\t\t\t\t\t\t %ld\n\n\n\n\t\t\tT R A K S A N S I   A N D A    T E L A H   S E L E S A I",a[no].saldo_terakhir);}
    else if(bahasa=='B'){
        printf("\t\t\t Y O U R    A C C O U N T   B A L A N C E   I S");
        printf("\n\n\t\t\t\t\t  %ld\n\n\n\n\t\t  Y O U R    T R A N S A C T I O N   H A S   B E E N   C O M P L E T E D",a[no].saldo_terakhir);}
    printf("\n\n=================================================================================================\n\n\n");getch();
    lanjutbayar2();
}
int transfer()
{
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t\t T R A N S F E R");
        printf("\n\n\t\t\t\t T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t\t    T R A N S F E R");
        printf("\n\n\t\t\t\t P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t P I L I H A N   T R A N S F E R\n\n\n\n\n");
    else if(bahasa=='B')printf("\t\t\t\t T R A N S F E R    O P T I O N\n\n\n\n\n");
    printf("1<----- V I S A    M O N E Y   T R A N S F E R\n\n\n");
    printf("2<----- K E    R E K E N I N G   M A N D I R I\n\n\n");
    printf("3<----- K E    R E K E N I N G   B A N K   L A I N   /    L I N K  /   A T M   B E R S A M A   /   P R I M A\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&trans);
    if(trans==0){menuutama();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\tW A S P A D A   T E R H A D A P   P E N I P U A N!!!\n\n\n\t\tY A N G   M E N G A T A S N A M A K A N    B A N K   M A N D I R I");
        printf("\n\n\n\n\t\t\t\t M A S U K K A N    N O M O R\n\n\n\t\t\t  R E K E N I N G   T U J U A N    T R A N S F E R");
        printf("\n\n\t\t\t\t T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t     G U A R D   A G A I N S T   F R A U D!!!\n\n\n\t\t\tO N    B E H A L F   O F    T H E   B A N K   M A N D I R I");
        printf("\n\n\n\n\t\t\t\t\tE N T E R    T R A N S F E R\n\n\n\t\t\tD E S T I N A T I O N    A C C O U N T   N U M B E R");
        printf("\n\n\t\t\t\t     P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t ");
    scanf("%s",norek);
    if(norek==0){ menuutama();}
    for(i=0; i<5; i++)
        if(strcmp(norek, a[i].no_rekening)==0)	{rek=i;	stat=1;break;}
            if(stat==0){system("cls");	printf("\n\n\n\t\t\tRekening tersebut tidak ada");	Sleep(1000);	transfer();}
            else if (strcmp(a[no].no_rekening, a[rek].no_rekening)==0)	{system("cls");	printf("\n\n\n\t\t    Tidak bisa transfer ke rekening sendiri"); Sleep(1000); transfer();}
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t    M A S U K K A N   J U M L A H  \n\n\t\t\t\t\t(M I N I M U M   5 0 0 0 0)\n");
        printf("\n\n\t\t\t\t T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t  E N T E R    T H E   N O M I N A L  \n\n\t\t\t\t  (M I N I M U M   5 0 0 0 0)\n");
        printf("\n\n\t\t\t\t P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n");
    printf("\t\t\t\t\t\t\t");
    scanf("%ld",&transf);
    if(transf==0){ menuutama();}
    else if(transf>=50000){
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A')printf("\t\t\t\t K O N F I R M A S I    T R A N S F E R");
    else if(bahasa=='B')printf("\t\t\t\t T R A N S F E R    C O N F I R M A T I O N");
    printf("\n\n\n=================================================================================================\n\n\n\n");
    if(bahasa=='A'){
        printf("\t\tNAMA                  : %s",a[no].nama_lengkap);
        printf("\n\t\tJENIS TRANSFER        :");}
    else if(bahasa=='B'){
        printf("\t\tNAME                       : %s",a[no].nama_lengkap);
        printf("\n\t\tTYPES OF TRANSFER          :");}
    switch(trans)
    {
        case 1 : printf(" VISA MONEY TRANSFER");break;
        case 2 : printf(" KE REKENING MANDIRI");break;
        case 3 : printf(" KE REKENING BANK LAIN / LINK / ATM BERSAMA / PRIMA");break;
    }
    if(bahasa=='A'){
        printf("\n\t\tNAMA REKENING TUJUAN  : %s",a[rek].nama_lengkap);
        printf("\n\t\tNOMOR REKENING TUJUAN : %s",norek);
        printf("\n\t\tJUMLAH TRANSFER       : %ld",transf);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tB E N A R ----->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tS A L A H ----->0");}
    else if(bahasa=='B'){
        printf("\n\t\tDESTINATION ACCOUNT NAME   : %s",a[rek].nama_lengkap);
        printf("\n\t\tDESTINATION ACCOUNT NUMBER : %s",norek);
        printf("\n\t\tTRANSFER AMOUNT            : %ld",transf);
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tT R U E ------->1");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tF A L S E ----->0");}
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt1);
    getch();
    if(yt1==1){
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");
        Sleep(1000);
        if(keluar>a[no].saldo_terakhir){system("cls");
            if(bahasa=='A')printf("\n\n\n\n\n\n\t\t\t\tS A L D O    A N D A    T I D A K    M E N C U K U P I\n\n\n\n");
            else if(bahasa=='B')printf("\n\n\n\n\n\t\t\tY O U R    B A L A N C E    I N A D E Q U A T E\n\n\n\n\n");}
        else{
            a[no].saldo_terakhir=a[no].saldo_terakhir-transf;
            a[rek].saldo_terakhir=a[rek].saldo_terakhir+transf;
            log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi transfer ke rekening %s Sebesar %ld\"\n",__DATE__,__TIME__,a[rek].nama_lengkap,transf);
            fprintf(fr[rek], "%s,%s,\"Transaksi transfer dari rekening %s Sebesar %ld\"\n",__DATE__,__TIME__,a[no].nama_lengkap,transf);	for(i=0; i<3; i++) fclose(fr[i]);	Sleep(200);
            printf("=================================================================================================\n\n\n");
            if(bahasa=='A')printf("\t\t\t\t   T R A N S A K S I    B E R H A S I L\n\n\n");
            else if(bahasa=='B')printf("\t\t\t\t   S U C C E S S F U L    T R A N S A C T I O N S\n\n\n");
            printf("=================================================================================================\n\n\n\n");
        }
        lanjutbayar2();}
    else if(yt1==0){ transfer();}
    }else if(transf<50000){
        system("cls");
        if(bahasa=='A')printf("\n\n\t\t\t\tJUMLAH YANG ANDA TRANSFERKAN KURANG DARI 50000");
        else if(bahasa=='B')printf("\n\n\t\t\t\tTHE NUMBER OF YOUR TRANSFER LESS THAN 50000");Sleep(2000);transfer();
    }
}
int ubahpin()
{
    system("cls");
    printf("=================================================================================================\n\n\n");
    if(bahasa=='A'){
        printf("\t\t\t\t M A S U K K A N   P I N   L A M A  A N D A");
        printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
    else if(bahasa=='B'){
        printf("\t\t\t\t E N T E R   Y O U R   O L D   P I N");
        printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");}
    printf("\n\n\n=================================================================================================\n\n\n\n\t\t\t\t\t");
    scanf("%s",&pinn);
    if(pinn==0){ menuutama();}
    else if(strcmp(pinn,a[i].pin)==0){
        ulangi1:
        system("cls");
        printf("=================================================================================================\n\n\n");
        if(bahasa=='A'){
            printf("\t\t\t\t M A S U K K A N   P I N   B A R U  A N D A");
            printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
        else if(bahasa=='B'){
            printf("\t\t\t\t E N T E R   Y O U R   N E W   P I N");
            printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");}
        printf("\n\n\n=================================================================================================\n\n\n\n\t\t\t\t\t");
        scanf("%s",&pinb);
        if(pinb==0){ menuutama();}
        system("cls");
        printf("=================================================================================================\n\n\n");
        if(bahasa=='A'){
            printf("\t\t\t\t U L A N G I   P I N   B A R U  A N D A");
            printf("\n\n\t\t\t\t   T E K A N   0   U N T U K   B A T A L");}
        else if(bahasa=='B'){
            printf("\t\t\t\t R E P E A T  Y O U R   N E W   P I N");
            printf("\n\n\t\t\t\t   P R E S S   0   T O   V O I D");}
        printf("\n\n\n=================================================================================================\n\n\n\n\t\t\t\t\t");
        scanf("%s",&pinb1);
        if(pinb1==0){ menuutama();}
        system("cls");
        if(bahasa=='A')printf("\n\t\t\t\tT R A N S A K S I   S E D A N G    D I P R O S E S");
        else if(bahasa=='B')printf("\n\t\t\t\tT R A N S A C T I O N   I S   B E I N G   P R O C E S S E D");Sleep(1000);
        if(strcmp(pinb,pinb1)==0){
            strcpy(a[no].pin,pinb1);	log_nasabah();	tx = time(NULL);	y=localtime(&tx);
            fr[0]=fopen("data_transaksi_2210161048.txt","a+");	fr[1]=fopen("data_transaksi_2210161049.txt","a+");	fr[2]=fopen("data_transaksi_2210161050.txt","a+");
            fprintf(fr[no], "%s,%s,\"Transaksi ubah pin menjadi %s\"\n", __DATE__, __TIME__,a[no].pin);	for(i=0; i<3; i++) fclose(fr[i]);
            system("cls");
            if(bahasa=='A')printf("\n\n\n\t\t\tP I N   A N D A  T E L A H   B E R H A S I L   D I U B A H");
            else if(bahasa=='B')printf("\n\n\n\t\t\t\tY O U R   P I N   H A V E   S U C C E S S F U L L Y   C H A N G E D");Sleep(1000);
        }
        else {
            system("cls");
            if(bahasa=='A')printf("\n\n\n\t\t\tP I N   Y A N G   A N D A   M A S U K K A N   T I D A K   S A M A");
            else if(bahasa=='B')printf("\n\n\n\t\t\tP I N  Y O U   E N T E R E D   I S   N O T   T H E   S A M E");Sleep(1000);
            goto ulangi1;
        }
    }
    else {
        system("cls");
        if(bahasa=='A')printf("\n\n\n\t\t\t\t\t\tMaaf ! Pin Anda salah\n\n\n\n\n\n\n");
        else if(bahasa=='B')printf("\n\n\n\t\t\t\t\t\tSORRY ! YOU ARE WRONG PIN\n\n\n\n\n\n\n");Sleep(2000);
        ubahpin();}
    lanjutbayar2();
}

int lanjutbayar2()
{
    system("cls");
    if(bahasa=='A'){
        printf("\n\nI N G I N   T R A N S A K S I   L A I N    ?\n\n\n");
        printf("\t\t\t\t\t\t\t\tT R A N S A K S I   L A I N --->1\n\n\n");
        printf("\t\t\t\t\t\t\t\tM E N U   U T A M A ----------->2\n\n\n");
        printf("\t\t\t\t\t\t\t\tS E L E S A I ----------------->3\n\n\n");}
    else if(bahasa=='B'){
        printf("\n\nW A N T  O T H E R   T R A N S A C T I O N S    ?\n\n\n");
        printf("\t\t\t\t\t\t\t  O T H E R   T R A N S A C T I O N --->1\n\n\n");
        printf("\t\t\t\t\t\t\t  M A I N   C O U R S E --------------->2\n\n\n");
        printf("\t\t\t\t\t\t\t  E N D ------------------------------->3\n\n\n");}
    printf("\t\t\t\t\t\t\t\t\t\tE N T E R ----->");
    scanf("%d",&yt2);
    if(yt2==1){
        lainnya();
    }
    else if(yt2==2){
         menuutama();
    }
    else if(yt2==3){
        _exit(0);
    }
}
