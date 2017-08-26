# WiFi Air Quality App with Data Tracking

A WiFi Air Quality App with Data Tracking intended for indoor air quality monitoring that can detect a wide range of carbon dioxide reading (eCO2) readings and Volatile Organic Compounds (VOCs) such as Alcohols, Aldehydes, Ketones, Organic Acids, Amines, Aliphatic and Aromatic Hydrocarbons.

The WiFi Air Quality App uses an Adafruit CCS811 Air Quality Sensor to take readings in real time and then transmit the data wirelessly via WiFi with the Adafruit Feather HUZZAH ESP8266 WiFi Development Board to a Firebase real-time cloud database, and then displaying the results using a React.js website interface.


### Project Status - In Process - Starting, 8/25/2017

----

### Table of Contents

  -  WiFi Air Quality App Description
  -  Features to Have 
  -  Hardware Used for Project
  -  Schematic of Layout
  -  Code Used for Programming Hardware
  -  Website Technologies 
  -  How to Use This App
  -  File and Directory Structure
  -  Revision History
  
----

### WiFi Air Quality App Description
App & Device can be used to monitor indoor air quality conditions in agricultural, industrial or commercial applications and can be expanded to monitor numerous other types of data according to the need of the clients, market and or by sensors applied to the application. 

Project is to measure the Carbon Dioxide (eCO2) readings and Volatile Organic Compounds (VOCs) readings in real time with sensors and then transmit the data via WiFi to Firebase, a real-time cloud database, and then display the data using a React.JS website interface in real time.


----

### Features to Have:
- Use Firebase (a Backend-as-a-Service cloud storage), to store data on its real-time database to log data of Carbon Dioxide (eCO2) readings and Volatile Organic Compounds (VOCs) readings via WiFi
- Viewable results by a React.JS website interface
- Real time Carbon Dioxide (eCO2) and Volatile Organic Compounds (VOCs) monitoring as polled from sensor 
- Battery powered, portable device


----

### Hardware Used for Project

Parts Used

  - Adafruit Feather HUZZAH ESP8266 WiFi Development Board with built in USB and battery charging  ![@ Adafruit](https://www.adafruit.com/product/2821)


  - Adafruit CCS811 Air Quality Sensor Breakout Board - VOC and eCO2  ![@ Adafruit](https://www.adafruit.com/product/3566)
 
----

### Schematic of Layout

----

### Code Used for Programming Hardware
Code used for programming the Adafruit Feather HUZZAH ESP8266 board is located in the directory  [feather_huzzah_esp8266_code](https://github.com/DKMitt/wifi-react-air-quality/tree/master/feather_huzzah_esp8266_code). 

* __Definition of Code__

  * 
  * 
  * 
	
----

### Website Technologies

Description of website technologies used to develop this app.

- REACT Router 4.1.1
- REACT.JS based using [create-react-app](https://github.com/facebookincubator/create-react-app), currently it is a thin layer on top of many amazing community projects, such as:

- webpack with webpack-dev-server, html-webpack-plugin and style-loader
Babel with ES6 and extensions used by Facebook (JSX, object spread, class properties)

- Autoprefixer

- Jest

- ESLint
- All of them are transitive dependencies of the provided npm package.

#### Dependecies
    firebase: 4.1.3,
    react: 15.6.1,
    react-dom: 15.6.1,
    react-router: 4.1.1,
    react-router-dom: 4.1.1
    
----


### How to Use This App

Description of how to use the app

To start the app use the following command

  "npm start"   - this Runs the app in development mode.

  Open http://localhost:3000 to view it in the browser.


----


### File and Directory Structure

```
.
├── feather_huzzah_esp8266_code
│   │
│   └── 
│ 
├── public
│   │
│   ├── assets
│   │   │
│   │   └── img
│   │       │
│   │       └── 
│   │
│   ├── favicon.ico
│   │
│   ├── index.html
│   │
│   └── manifest.json
│
├── src
│   │
│   ├── img
│   │   │
│   │   └── 
│   │
│   ├── About.js
│   │
│   ├── App.css
│   │
│   ├── App.js
│   │
│   ├── App.test.js
│   │
│   ├── Home.js
│   │
│   ├── index.css
│   │
│   ├── index.js
│   │
│   └── registerServiceWorker.js
│ 
├── .gitignore
│
├── package.json
│
└── README.md            
```
----
### Revision History 

Description of revisions made to the app - In Process, last updated 8/25/2017

  - [ ]  hardware layout - 
  - [ ]  hardware prototype assembly - 
  - [ ]  hardware coding & embedding - 
  - [ ]  cloud database creation - 
  - [ ]  configure to send data to database - 
  - [ ]  testing data sending to database - 
  - [ ]  file and directory structure creation  - 
  - [ ]  website wire framing - 
  - [ ]  website coding - 
  - [ ]  file and directory structure cleanup - 
  - [ ]  final testing - 
