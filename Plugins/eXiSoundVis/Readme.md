[![](http://imgur.com/DWGECXG.gif)](https://www.youtube.com/watch?v=N4eA68BEpak)
<sup>**Note:** The image above is an animated GIF, so there's some quality lost. Please see the [YouTube video](https://www.youtube.com/watch?v=N4eA68BEpak) for higher quality visualization of Disclosure's You and Me.</sup>

This is an Unreal Engine 4 plugin that loads `.ogg` files at runtime and analyzes them to get the frequency spectrum to control gameplay, visualization and more.


Feature list and pictures of available nodes:
---------------------------------------------

* Load `.ogg` file from HDD
* Load sound names and file paths from HDD to display list of sound
* Get frequency spectrum of a loaded Sound
* Get specific frequency values by using the calculated frequency spectrum
* Start/Pause/Resume/Stop your Sound and Frequency Calculation through the build in Player

![](http://puu.sh/opY1K/16c2b7b3c5.jpg)
![](http://puu.sh/opYtT/ed734b2396.png)
![](http://puu.sh/opYPr/e850f7baf0.jpg)
![](http://puu.sh/oq0nd/c72fb3d48e.jpg)

Installation
-------------
Unzip the package into the Plugins directory of your game. 
To add it as an engine plugin you will need to unzip the module into the plugin directory under where you installed UE4.


**1.** Download the ZIP File.

**2.** Create a `Plugins` folder in your game or engine directory and extract the plugin into it. It should look something like this:

![](http://puu.sh/oqMnc/f1f3292bc0.png)

**3.** Open your project (and/or regenerate the Visual Studio files to have the plugin in your solution) and enable it in the plugin section:

![](http://puu.sh/oqM0q/9a07b082eb.png)

**4.** To use the Plugin, add the `SoundVisComponent` to the Actor of your choice, which comes with the plugin:

![](http://puu.sh/oqMuE/10892c5bc2.png)

**5.** Load a sound via its **ABSOLUTE** path (only `.ogg` files). The Component has a `Delegate | OnFileLoadCompleted`, which gets called and passes the complete `USoundWave` Reference, once the process is over (ASYNC)!:

![](http://puu.sh/oqN7E/72273737df.jpg)

**5.1** NEVER CLOSE THE PROJECT WHILE LOADING A SOUND!

**6.** Use the  Calculate Frequency Spectrum function after you loaded a sound to get an `Array of Frequency Values`, which represents the Frequencies from 0 to ~22000hz:

![](http://puu.sh/oqNpa/8a3b11650c.jpg)

**6.1** THIS ONLY WORKS WITH LOADED AND DECOMPRESSED .ogg FILES!

**7.** Since this only analyzes one small segment of the Sound and we don't want ugly `Delay-Loops`, use these functions to Start/Pause/Resume/Stop the whole sound (will also play it!) 

![](http://puu.sh/opYPr/e850f7baf0.jpg)

**7.1** The analyzed Frequency Spectrum will be returned via a second `Delegate | OnFrequencySpectrumCalculated`, which also comes with the Component.

![](http://puu.sh/opYVk/aaf6479271.jpg)

**8.** Now you can use the different frequency functions to get the values (for example if you want to get the values for bass, use 20 to 60 for SubBass and 60 to 250 for Bass. You can look up more on the internet.

![](http://puu.sh/opYtT/ed734b2396.png)

**11.** You can find all functions available by going to the SoundVis category. They are explained in the [`SoundVisComponent.h`](https://github.com/eXifreXi/eXiSoundVis/blob/4.11/Source/eXiSoundVis/Public/SoundVisComponent.h) if you don't know how to use them:

![](http://puu.sh/oqNUm/317177f03d.png)

When cooking, make sure to add the plugin to your projects dependencies!

![](http://i.imgur.com/fh8VB1T.png)


Example project
---------------


- 4.16 (No idea if properly commented or not and rather ugly, but maybe it helps!): http://www.cedric-neukirchen.net/Downloads/SoundVisDemo.7z

License
-------------
By using this plugin you accept the CC-BY 4.0 license and

The MIT License (MIT)

Copyright (c) 2015 Cedric Neukirchen

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


Contact
-------------
If you have any Questions, Comments, Bug reports or feature requests for this plugin, 
or you wish to contact me you can:

email me - cedric.neukirchen@gmx.de

contact me on the forum - Username: eXi

contact me on the Discord Unreal-Slackers Server - Username: cedric_exi


Credits
--------------
n00854180t 	- Helping a lot to get the loading of the .ogg file running

moss		- Helping to understand wave files
