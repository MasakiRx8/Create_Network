# Create_Network
Create Network<br>
ex.BASF, HCSF, Lattice, SW, RRG<br>
|Example game situation|Time evolution|
|:--:|:--:|
|<img src="https://user-images.githubusercontent.com/39644776/41784084-9bb5b1b4-7679-11e8-87be-2401128dd9a6.png" width="400px" title="Image of the game on lattice">|<img src="https://user-images.githubusercontent.com/39644776/43253959-367a4eb6-9101-11e8-83f6-dd7b0f323118.gif" width="450px">|
|C: Cooperator, D: Defector| Blue: Cooperator, Red: Defector| 
<br>

# Dpendency
Language used : C++<br>
Compiler : Intel/2018<br>
Operating environment :  Super computer of Kyushu University in Japan
# Usage
First, you should create directory of outpted result ".dat" files.<br>
`$ mkdir Network`<br>
`cd Network`<br>
`mkdir BASF`<br>
`mkdir HCSF`<br>
`mkdir Lattice`<br>
`mkdir SW`<br>
`mkdir RRG`<br>
`mkdir network_evaluation`<br>
Next, module loading, Compileing, Calculation 
`$ module load intel/2018`<br>
`$ icpc SuperComputer_Version.cpp -o SuperComputer_Version`<br>
`$ ./SuperComputer_Version`<br>
# Licence
This software is released under the MIT License, see LICENSE.
# Authors
MasakiRx8
# References
Book name : 複雑ネットワーク 基礎から応用まで<br>
Authors : 増田直紀, 今野紀雄<br>
Issuer : 小山透<br>
Issuing office : 近代科学社
