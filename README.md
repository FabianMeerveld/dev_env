# Develop omgeving

## Docker
In deze repo heb ik een docker file gemaakt die c++ build

### Hoe gebruiken
Om de cpp file te compile gebruik je het volgende command in de root `docker build -t hello_world .`
Om vervolgens het programma te runnen gebruik je het volgende commando `docker run hello_world`

### Hoe werkt de dockerfile
Eerst word een container gemaakt met ubuntu:24.04, daarna een omgevings variabel instellen en zorgen dat alles up to date is en packages installeren. 

Daarna word de workdir gemaakt en wordt het C++ project gebouwt. 

ALs laatste word het project uitgevoerd.

## devcontainer
devcontainer voor c++ developemnet
### Hoe je de devcontainer bouwt en runt.
Voer in vscode in het pallete  `dev-containers: Reopen in Container` en open de folder
### Hoe je de applicatie compileert en welke commando's je kunt gebruiken.
Je compileert het programma door in de terminal naar de build folder te gaan, en `cmake ..` of `cmake -DCMAKE_BUILD_TYPE=Debug .` (de een voor debug en de ander voor release) en vervolgens `make` te doen. 
### Hoe je de applicatie debugt en hoe de logberichten geïnterpreteerd kunnen worden.
In vscode kan je op debug en run drukken om de stappen te volgen. de logberichten kan je ook de stappen volgen maar die moet je zelf in elkaar zetten.
### Uitleg over hoe de conditionele compilatie van de logger is ingesteld (en hoe de macro ENABLE_LOGGING in Debug builds wordt toegevoegd).
In de cmakelists word gekeken of de build type debug is en word er een define gemaakt, in de logger.hh word gekeken of die define er is en dan word de functie ge defined.