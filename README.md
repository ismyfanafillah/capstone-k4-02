# Monitoring Kandang Sapi Menggunakan Sensor Suhu, Kelembapan, Cahaya, dan Gas Amonia

![Poster](poster.png)

Projek ini bertujuan untuk mengembangkan perangkat IoT untuk monitoring kandang sapi menggunakan sensor DHT22, BH1750, dan MICS 6814 yang terhubung ke mikrokontroler ESP32. Data dikumpulkan dari Kandang Sapi Laboratorium Fakultas Peternakan IPB University selama bulan Mei 2024, dan dianalisis melalui platform ThingSpeak.

## Fitur

- Menginisialisasi sensor DHT22, BH1750, dan MICS 6814 yang terhubung ke mikrokontroler ESP32
- Mengirim data secara real-time ke platform ThingSpeak setiap 30 detik
- Memvisualisasikan dan menganalisis data kondisi lingkungan kandang sapi melalui platform ThingSpeak

## Perangkat Keras

- Sensor DHT22 untuk mengukur suhu dan kelembapan udara
- Sensor BH1750 untuk mengukur intensitas cahaya
- Sensor MICS 6814 untuk mengukur kadar gas amonia (NH3)
- Mikrokontroler ESP32
- Modem 4G (hotspot/wifi) untuk gateway ke internet

## Perangkat Lunak

- Arduino IDE untuk memprogram mikrokontroler
- Fritzing untuk desain rangkaian
- Library untuk fungsi kode yang dibutuhkan
- ThingSpeak untuk platform IoT

## Penggunaan

- Hubungkan sensor DHT22, BH1750, dan MICS 6814 ke mikrokontroler ESP32 sesuai dengan skema rangkaian
- Upload kode program ke mikrokontroler ESP32 menggunakan Arduino IDE
- Konfigurasikan koneksi WiFi pada kode program dengan kredensial yang sesuai
- Hubungkan modem 4G (hotspot/wifi) sebagai gateway ke internet
- Akses platform ThingSpeak untuk melihat visualisasi dan analisis data kondisi lingkungan kandang sapi


## Tim

| NIM          | Nama                        |
|--------------|-----------------------------|
| G6401211001  | Ismy Fana Fillah            |
| G6401211003  | Muhammad Rizki Al Maghribi  |
| G6401211012  | Dinda Regista Aprilia       |
| G6401211036  | Aulia Azzahra Syafitri      |
| G6401211052  | Khalid Zia Rabbani          |
| G6401211115  | Khansa Nabila Alfiyani      |
