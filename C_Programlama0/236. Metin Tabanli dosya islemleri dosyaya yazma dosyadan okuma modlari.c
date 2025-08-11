

File yapisi file pointer olarak adlandirilir

FILE *dosya; seklinde tanimlanir.

Dosyayi acmak icin fopen(),
Dosyayi kapatmal icin fclose() kullanilir.

FILE *dosya;
dosya = fopen(const char dosya_adi, const char mod);
.....
dosya islemleri
.....
fclose(dosya);

Dosya acma modlari
r		read only 		Sadece okuma icin. Dosyanin Acilmasi icin onceden olusturulmasi gerekir.
w		write only		Yalnizca yazma icin. Dosya kayiyli olsun veya olmasin yeniden olusturukur.
a		append			Ekleme. Kayitli bir dosyanin sonuna veri eklemek icin kullanilir
r+		okuma ve yazma	Bu modda acilmis olan bir dosyanin daha onceden var olmasi gerekir
w+ 		okuma ve yazma	Bu modda acilmis olan bir dosya var olsun veya olmasin yeniden olusturulur
a+		Okuma ve yazma	Kayitli dosyanin sonuna veri eklemek icin acilir.


Fonksiyon

fgetc()		Dosyaya bir karakter veri okur
fgets()		Dosyaya bir kararkter dizi okur
fread()		Dosyaya bir kayit dizi veya karakteri ikili olarak okur
fscanf()	Dosyadaki verileri bizimlendirerek okur

Dosyanin sonunun belirlenmesi feof()

Dosyada okuma islemleri yapilirken, cogu kez dosyanin sonunu denetlemek gerekecektir.
Dosya gostergesinin dosyanin sonuna isaret edip etmedigini anlamak icin feof fonksiyonu kullanilir.

FILE *dosya;
while(feof(dosya))
{
	fgetc(dosya);	//Dosyanin sonuna gelinmedigi surece dosyadan karakter okur
}

