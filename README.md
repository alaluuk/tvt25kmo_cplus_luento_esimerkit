# tvt25kmo_cplus_luento_esimerkit

## Terminaaliongelma

Uusin Qt Creator sulkee ulkoisen terminaali-ikkunan automaattisesti. Mitkään asetukset eivät tunnu tähän auttavan.
Laitoin jokaisen sovelluksen loppuun alla olevan rivin tuon estämiseksi
<pre>
system("pause");
</pre>

## Ratkaisu

Tuo ongelma on Qt Creatorin versiossa 17.0.0, mutta se on korjattu ainakin versioon 18.0.0

## Lisätehtävä1 (1-3)

Kansiossa Lisatehtava_1 oleva sovellus sisältää ratkaisut tehtäviin 1-3, jotka ovat sivulla [https://peatutor.com/cplus/luento_esimerkit/extras.php](https://peatutor.com/cplus/luento_esimerkit/extras.php)

![Luokan Car luokkakaavio](Car.png)

"Kuva 1: Car luokan luokkakaavio."

### Selitykset `getMake` ja `setMake` -funktioiden `const`-sanoille

#### `string getMake() const;`

- `const` funktion **lopussa** tarkoittaa, että tämä jäsenfunktio **ei muuta olion tilaa**.  
- Toisin sanoen funktio **ei saa muuttaa luokan jäseniä** (eli muuttujia kuten `make`, `model` tai `year`).  

---

#### `void setMake(const string &newMake);`

- Tässä `const` liittyy **parametriin** `newMake`.  
- Se tarkoittaa, että funktion sisällä **parametrin arvoa ei voi muuttaa**.  
- Koska parametri välitetään viitteenä (`&`) tehokkuuden vuoksi, `const` suojaa alkuperäistä arvoa muutoksilta.

**Esimerkki:**
```cpp
void Auto::setMake(const string &newMake) {
    // newMake = "Honda"; //  Ei sallittu, koska newMake on const
    make = newMake;       // Sallittu – arvo vain kopioidaan
}
```

---

#### Yhteenveto

| Funktio | `const`-sanan merkitys |
|----------|------------------------|
| `string getMake() const;` | Funktio ei muuta olion jäseniä. |
| `void setMake(const string &newMake);` | Parametria `newMake` ei voi muuttaa funktion sisällä. |

## Perintä

### perinta_esim1

Tehtävän tarkoitus on esittää, kuinka suojaustasot (private, protected, public) vaikuttavat perivän luokan toimintaan.

### perinta_esim2

Tehtävän tarkoitus on esittää seuraavat asiat:
- perinnän hyöty: kantaluokan ominaisuuksien hyödyntäminen useammassa aliluokassa
- kantaluokan konstruktorin hyödyntäminen aliluokassa
- polymorfismi eli "eri oliot voivat vastata samaan viestiin (eli metodikutsuun) omalla tavallaan" (tulostaTiedot()-metodi tässä)
- metodin ylikirjoittaminen (sanat virtual ja override)
- auto sanan hyödyntäminen vektorissa, jossa eri luokkien olioita
- object slicing

## Muistivuoto

Tehtävässä muistivuoto on tahallaan aiheutettu muistivuoto, jota tutkitaan **Heob**-työkalun avulla.

## Qt Console sovellus

Tutustutaan Qt Frameworkin ominaisuuksiin kuten QObject-luokka ja Q_OBJECT-makro ja signal-slot systeemi.
Rakennetaan sovllus, joka hakee HTTP-protollan avulla dataa valmiista API:sta https://peatutor.com/json_example/

Tuo API palauttaa dataa JSON-muodossa eli tällaista:
<pre>
[
{
id: 1,
firstname: "Matti",
lastname: "Meikäläinen"
},
{
id: 2,
firstname: "Maija",
lastname: "Virtanen"
},
{
id: 3,
firstname: "Pekka",
lastname: "Pouta"
},
{
id: 4,
firstname: "Liisa",
lastname: "Laine"
}
]
</pre>

Käytetään lähteenä sivua https://peatutor.com/qt/

### Signal-Slot

On Qt Frameworkkiin sisältyvä systeemi, jolla voidaan korvata **callback**-funktioiden käyttö. Tässä sitä tarvitaan, koska http-request toimii asynkronisesti. Se tarkoittaa, että kun lähetämme http-requestin, niin sovellus "ei pysähdy odottamaan vastausta". Eli tuon kutsun perään emme voi kirjoittaa koodia, joka tulostaa saamamme vastauksen.

Signal-slot toimii edellä siten, että kun palvemimelta on saatu vastaus http-requestiin, niin tuo request metodi "nostaa" signaalin nimeltään **finished**. Kytkemme tuon signaalin kirjoittamaamme slottiin. Tuo slot on ihan normaali metodi. Ja tuossa slotissa tulostamme saamamme vastauksen eli http-responsen lähettämän datan. Ja siis kun tuo signaali nousee, niin tuo slot metodi suoritetaan.