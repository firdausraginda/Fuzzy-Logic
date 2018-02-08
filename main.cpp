#include <iostream>

using namespace std;

int main()
{
    //FIX KUMPUL
    int arrayEmosi[10];
    int arrayProvokasi[10];
    double hasil[10];

    /*
    arrayEmosi[0]=97; arrayProvokasi[0]=74;
    arrayEmosi[1]=36; arrayProvokasi[1]=85;
    arrayEmosi[2]=63; arrayProvokasi[2]=43;
    arrayEmosi[3]=82; arrayProvokasi[3]=90;
    arrayEmosi[4]=71; arrayProvokasi[4]=25;
    arrayEmosi[5]=79; arrayProvokasi[5]=81;
    arrayEmosi[6]=55; arrayProvokasi[6]=62;
    arrayEmosi[7]=57; arrayProvokasi[7]=45;
    arrayEmosi[8]=40; arrayProvokasi[8]=65;
    arrayEmosi[9]=57; arrayProvokasi[9]=45;

    arrayEmosi[10]=77; arrayProvokasi[10]=70;
    arrayEmosi[11]=68; arrayProvokasi[11]=75;
    arrayEmosi[12]=60; arrayProvokasi[12]=70;
    arrayEmosi[13]=82; arrayProvokasi[13]=90;
    arrayEmosi[14]=40; arrayProvokasi[14]=85;
    arrayEmosi[15]=80; arrayProvokasi[15]=68;
    arrayEmosi[16]=60; arrayProvokasi[16]=72;
    arrayEmosi[17]=50; arrayProvokasi[17]=95;
    arrayEmosi[18]=100; arrayProvokasi[18]=18;
    arrayEmosi[19]=11; arrayProvokasi[19]=99;
    */

    arrayEmosi[0]=58; arrayProvokasi[0]=63;
    arrayEmosi[1]=68; arrayProvokasi[1]=70;
    arrayEmosi[2]=64; arrayProvokasi[2]=66;
    arrayEmosi[3]=57; arrayProvokasi[3]=77;
    arrayEmosi[4]=77; arrayProvokasi[4]=55;
    arrayEmosi[5]=98; arrayProvokasi[5]=64;
    arrayEmosi[6]=91; arrayProvokasi[6]=59;
    arrayEmosi[7]=50; arrayProvokasi[7]=95;
    arrayEmosi[8]=95; arrayProvokasi[8]=55;
    arrayEmosi[9]=27; arrayProvokasi[9]=79;

    int emosi,provokasi;

    double miuEmosiRendah=0; double miuEmosiSedang=0; double miuEmosiTinggi=0; double miuProvokasiKecil=0; double miuProvokasiMedium=0; double miuProvokasiBesar=0;
    double angkaAND[9];
    double miuMax=0; double miuMaxNO=0; double miuMaxYES=0; double y = 0;
    string statusResultAND;
    string resultAND[9];

    /*
    cout<<"Masukkan nilai emosi: ";
    cin>>emosi;
    cout<<"Masukkan nilai provokasi: ";
    cin>>provokasi;
    cout<<endl;
    */

    for(int idx=0; idx<10; idx++){
        cout<<"============================START ke-"<<idx<<"============================"<<endl;

        emosi=arrayEmosi[idx];
        provokasi=arrayProvokasi[idx];

        //emosi start
        if((emosi>=0) && (emosi<50)){
            if((emosi>=0) && (emosi<=20)){
                miuEmosiRendah=1;
            }else if((emosi>20) && (emosi<50)){
                double miuEmosiRendah1=50-emosi;
                double miuEmosiRendah2=50-20;
                miuEmosiRendah=miuEmosiRendah1/miuEmosiRendah2;
                //miuEmosiRendah=((50-emosi)/(50-20));
            }
        }
        if((emosi>30) && (emosi<70)){
            if((emosi>30) && (emosi <50)){
                double miuEmosiSedang1=emosi-30;
                double miuEmosiSedang2=50-30;
                miuEmosiSedang=miuEmosiSedang1/miuEmosiSedang2;
                //miuEmosiSedang=(emosi-30)/(50-30);
            }else if(emosi==50){
                miuEmosiSedang=1;
            }else if((emosi>50) && (emosi<70)){
                double miuEmosiSedang1=70-emosi;
                double miuEmosiSedang2=70-50;
                miuEmosiSedang=miuEmosiSedang1/miuEmosiSedang2;
                //miuEmosiSedang=(70-emosi)/(70-50);
            }
        }
        if((emosi>50) && (emosi<=100)){
            if((emosi>50) && (emosi<80)){
                double miuEmosiTinggi1=emosi-50;
                double miuEmosiTinggi2=80-50;
                miuEmosiTinggi=miuEmosiTinggi1/miuEmosiTinggi2;
                //miuEmosiTinggi=(emosi-50)/(80-50);
            }else if((emosi>=80) && (emosi<=100)){
                miuEmosiTinggi=1;
            }
        }
        //emosi end

        //provokasi start
        if(provokasi>=0 && provokasi<50){
            if(provokasi>=0 && provokasi<=10){
                miuProvokasiKecil=1;
            }else if(provokasi>10 && provokasi<50){
                double miuProvokasiKecil1=50-provokasi;
                double miuProvokasiKecil2=50-10;
                miuProvokasiKecil=miuProvokasiKecil1/miuProvokasiKecil2;
                //miuProvokasiKecil=(50-provokasi)/(50-10);
            }
        }
        if(provokasi>20 && provokasi<80){
            if(provokasi>20 && provokasi<50){
                double miuProvokasiMedium1=provokasi-20;
                double miuProvokasiMedium2=50-20;
                miuProvokasiMedium=miuProvokasiMedium1/miuProvokasiMedium2;
                //miuProvokasiMedium=(provokasi-20)/(50-20);
            }else if(provokasi==50){
                miuProvokasiMedium=1;
            }else if(provokasi>50 && provokasi<80){
                double miuProvokasiMedium1=80-provokasi;
                double miuProvokasiMedium2=80-50;
                miuProvokasiMedium=miuProvokasiMedium1/miuProvokasiMedium2;
                //miuProvokasiMedium=(80-provokasi)/(80-50);
            }
        }
        if(provokasi>50 && provokasi<=100){
            if(provokasi>50 && provokasi<90){
                double miuProvokasiBesar1=provokasi-50;
                double miuProvokasiBesar2=90-50;
                miuProvokasiBesar=miuProvokasiBesar1/miuProvokasiBesar2;
                //miuProvokasiBesar=(provokasi-50)/(90-50);
            }else if(provokasi>=90 && provokasi<=100){
                miuProvokasiBesar=1;
            }
        }
        cout<<"miu emosi rendah: ";
        cout<<miuEmosiRendah<<endl;
        cout<<"miu emosi sedang: ";
        cout<<miuEmosiSedang<<endl;
        cout<<"miu emosi tinggi: ";
        cout<<miuEmosiTinggi<<endl;
        cout<<"miu provokasi kecil: ";
        cout<<miuProvokasiKecil<<endl;
        cout<<"miu provokasi medium: ";
        cout<<miuProvokasiMedium<<endl;
        cout<<"miu provokasi besar: ";
        cout<<miuProvokasiBesar<<endl;
        cout<<endl;
        //provokasi end

        //membandingakan start
        int i=0;
        int counter=0;

        if(miuEmosiRendah!=0 && miuProvokasiKecil!=0){
            if(miuEmosiRendah<=miuProvokasiKecil){
                resultAND[i]="NO";
                angkaAND[i]=miuEmosiRendah;
            }else{
                resultAND[i]="NO";
                angkaAND[i]=miuProvokasiKecil;
            }
            i++;
            counter++;
        }

        if(miuEmosiRendah!=0 && miuProvokasiMedium!=0){
            if(miuEmosiRendah<=miuProvokasiMedium){
                //resultAND[i]="YES";
                resultAND[i]="NO";
                angkaAND[i]=miuEmosiRendah;
            }else{
                //resultAND[i]="YES";
                resultAND[i]="NO";
                angkaAND[i]=miuProvokasiMedium;
            }
            i++;
            counter++;
        }

        if(miuEmosiRendah!=0 && miuProvokasiBesar!=0){
            if(miuEmosiRendah<=miuProvokasiBesar){
                resultAND[i]="YES";
                angkaAND[i]=miuEmosiRendah;
            }else{
                resultAND[i]="YES";
                angkaAND[i]=miuProvokasiBesar;
            }
            i++;
            counter++;
        }

        if(miuEmosiSedang!=0 && miuProvokasiKecil!=0){
            if(miuEmosiSedang<=miuProvokasiKecil){
                resultAND[i]="NO";
                angkaAND[i]=miuEmosiSedang;
            }else{
                resultAND[i]="NO";
                angkaAND[i]=miuProvokasiKecil;
            }
            i++;
            counter++;
        }

        if(miuEmosiSedang!=0 && miuProvokasiMedium!=0){
            if(miuEmosiSedang<=miuProvokasiMedium){
                resultAND[i]="NO";
                angkaAND[i]=miuEmosiSedang;
            }else{
                resultAND[i]="NO";
                angkaAND[i]=miuProvokasiMedium;
            }
            i++;
            counter++;
        }

        if(miuEmosiSedang!=0 && miuProvokasiBesar!=0){
            if(miuEmosiSedang<=miuProvokasiBesar){
                resultAND[i]="YES";
                angkaAND[i]=miuEmosiSedang;
            }else{
                resultAND[i]="YES";
                angkaAND[i]=miuProvokasiBesar;
            }
            i++;
            counter++;
        }

        if(miuEmosiTinggi!=0 && miuProvokasiKecil!=0){
            if(miuEmosiTinggi<=miuProvokasiKecil){
                resultAND[i]="NO";
                angkaAND[i]=miuEmosiTinggi;
            }else{
                resultAND[i]="NO";
                angkaAND[i]=miuProvokasiKecil;
            }
            i++;
            counter++;
        }

        if(miuEmosiTinggi!=0 && miuProvokasiMedium!=0){
            if(miuEmosiTinggi<=miuProvokasiMedium){
                //resultAND[i]="NO";
                resultAND[i]="YES";
                angkaAND[i]=miuEmosiTinggi;
            }else{
                //resultAND[i]="NO";
                resultAND[i]="YES";
                angkaAND[i]=miuProvokasiMedium;
            }
            i++;
            counter++;
        }

        if(miuEmosiTinggi!=0 && miuProvokasiBesar!=0){
            if(miuEmosiTinggi<=miuProvokasiBesar){
                resultAND[i]="YES";
                angkaAND[i]=miuEmosiTinggi;
            }else{
                resultAND[i]="YES";
                angkaAND[i]=miuProvokasiBesar;
            }
            i++;
            counter++;
        }
        //membandingkan end

        for(i=0; i<counter; i++){
            cout<<resultAND[i]+" ";
            cout<<angkaAND[i]<<endl;
        }
        cout<<endl;

        //membandingkan par2 start
        for(i=0; i<counter; i++){
            if(resultAND[i] != resultAND[0]){
                statusResultAND="heterogen";
                i=counter;
            }else{
                statusResultAND="homogen";
            }
        }

        cout<<"Status: ";
        cout<<statusResultAND<<endl;
        cout<<endl;

        if(statusResultAND=="homogen"){
            for(i=0; i<counter; i++){
                if(angkaAND[i]>miuMax){
                    miuMax=angkaAND[i];
                }
            }
        }else{

            for(i=0; i<counter; i++){
                if((resultAND[i]=="NO") && (angkaAND[i]>miuMaxNO)){
                    miuMaxNO=angkaAND[i];
                }else if((resultAND[i]=="YES") && (angkaAND[i]>miuMaxYES)){
                    miuMaxYES=angkaAND[i];
                }
            }
        }
        //membandingkan part2 end

        //menghitung y* start
        cout<<"miumax: ";
        cout<<miuMax<<endl;
        cout<<"miumax YES: ";
        cout<<miuMaxYES<<endl;
        cout<<"miumax NO: ";
        cout<<miuMaxNO<<endl;
        cout<<endl;

        if(statusResultAND=="homogen"){
            if(resultAND[0]=="NO"){
                y=(20*miuMax)/(miuMax);
            }else if(resultAND[0]=="YES"){
                y=(90*miuMax)/(miuMax);
            }
        }else if(statusResultAND=="heterogen"){
            y=((20*miuMaxNO)+(90*miuMaxYES))/(miuMaxYES+miuMaxNO);
        }
        //menghitung y* end

        hasil[idx]=y;

        miuEmosiRendah=0; miuEmosiSedang=0; miuEmosiTinggi=0; miuProvokasiKecil=0; miuProvokasiMedium=0; miuProvokasiBesar=0;
        miuMax=0; miuMaxNO=0; miuMaxYES=0; y = 0;

        cout<<"============================END ke-"<<idx<<"============================"<<endl;
        cout<<endl;
    }//kurung kurawal tutup for utama

    char berita1='B';
    int berita2=21;
    cout<<"==============================HASIL=============================="<<endl;
    for(int idx=0; idx<10; idx++){
        cout<<"Berita ke-";cout<<berita1;cout<<berita2<<endl;
        cout<<"emosi: "; cout<<arrayEmosi[idx]<<"  ";
        cout<<"provokasi: "; cout<<arrayProvokasi[idx]<<endl;
        cout<<"range: "; cout<<hasil[idx]<<"  ";
        if((hasil[idx]>=0)&&(hasil[idx]<66)){
            cout<<"Hoax: NO"<<endl;
        }else if(hasil[idx]>=66){
            cout<<"Hoax: YES"<<endl;
        }
        cout<<endl;
        berita2++;
    }
    cout<<"==============================HASIL=============================="<<endl;

    return 0;
}
