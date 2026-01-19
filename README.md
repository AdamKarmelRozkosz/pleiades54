# Pleiades54
  
### A split mechanical keyboard designed and built by [me](https://github.com/AdamKarmelRozkosz)  
This keyboard features double Atmega 32u4 microprocessors as well as Vial support.  
note* this is first version and it will be further imrpoved with future designs.  

![Photo1](./photos/photo1.jpg)
![Photo2](./photos/photo2.jpg)  
## Requirements 
### Parts 
| Part name | Quantity | link |
|----------------|-----|------------| 
| Atmega 32u4 | 2 | [aliexpress](https://pl.aliexpress.com/item/1005004782408708.html?dp=6914f10dc7fc160512591b8a&cn=ah&aff_fcid=eee0c94e7a554dbb9003fa6172967f3c-1768840323412-05495-_d6jWDbY&aff_fsk=_d6jWDbY&aff_platform=link-c-tool&sk=_d6jWDbY&aff_trace_key=eee0c94e7a554dbb9003fa6172967f3c-1768840323412-05495-_d6jWDbY&terminal_id=4cb5ad5188764f539724dc31512667a9&afSmartRedirect=y) |
| 4 pin buttons | 2 | [aliexpress](https://pl.aliexpress.com/item/1005004067514307.html?spm=a2g0o.order_list.order_list_main.37.7a171c242sNorV&gatewayAdapt=glo2pol) | 
| TRRS ports | 2 | [aliexpress](https://pl.aliexpress.com/item/1005003111662179.html?spm=a2g0o.order_list.order_list_main.57.7a171c242sNorV&gatewayAdapt=glo2pol) | 
| Diodes | 54 | [aliexpress](https://pl.aliexpress.com/item/1005004962400215.html?spm=a2g0o.order_list.order_list_main.42.7a171c242sNorV&gatewayAdapt=glo2pol) |
| Switches | 54 | [unikeys](https://unikeyboards.com/collections/keyboard-switches) |
| Keycaps | 54 | [aliexpress](https://pl.aliexpress.com/item/32842379355.html?spm=a2g0o.order_list.order_list_main.6.3ec51c24qmmrAR&gatewayAdapt=glo2pol) |
| Dual TRRS cable | 1 | [aliexpress](https://pl.aliexpress.com/item/1005008831823377.html?spm=a2g0o.order_list.order_list_main.47.3ec51c24qmmrAR&gatewayAdapt=glo2pol) |  

Switches used in this build were CIY Asura. Any 3 pin switch would be good but when soldering the board I realized that some 5 pin switches won't fit.  
As for keycaps I recommend DSA keycaps just because of the flat profile.
### Software
To compile the software you need to install qmk fork vial-qmk
```
git clone https://github.com/vial-kb/vial-qmk.git
```
## Firmware
To install firmware onto the keyboard please follow these steps.  
#### clone the repo 
```
git clone https://github.com/AdamKarmelRozkosz/pleiades54.git
```
#### First create your keyboard directory
```
cd vail-qmk
```
```
mkdir  keyboards/[name]
```
#### Copy the firmware to the vial-qmk directory
```
cp pleiades54/firmware/pleiades54_REV1 vial-qmk/keyboards/[name]
```
#### Compiling the firmware 
To compile the firmware make sure you are in vial-qmk directory, then you can compile the firmware with this command,
```
make [name]:vial
```
when compiled correctly you should see .hex file 

#### Flashin the firwmare
To flash the firmware onto the keyboard make sure both sides are disconnected from eachother, then plug in one side of the keyboard via usb cable and type this command.
```
make [name]:vial:avrdude-split-left
```
While flashing the firmware it will ask you to reset it, just click twice on the reset button.  
you might want to change left to right depending which side are you flashing first.
then do the same for the other half.
```
make [name]:vial:avrdude-split-right
```
lastly connect them together.  
## Configuration
### Modify keymap.c file
I don't recommend this method but you can directly modify the keymap in this file. Please not that you will have to flash again.
### Vial 
You can use vial configurator as well. This is the *recommended* method. Just visit the [vial](https://vial.rocks/) website or download vial configurator from [here](https://get.vial.today/download/)

## Features
this keyboard features vial support with tap dance enabled from the start and NKRO.
