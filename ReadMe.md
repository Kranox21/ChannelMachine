![ChannelMachineLogoTitle](https://github.com/Kranox21/ChannelMachine/assets/11131166/ce3af0e2-17fd-48b9-b311-079d85146329)

# Texture packing and unpacking channel tool for Unreal Engine

## Getting Started:
- To open the Channel Machine Editor click the icon at the top of the toolbar to launch the Utility Widget Tool

- A new window will pop up, you can use the window as is, or what I personally do is Dock the window along Details and World Settings.

![Screenshot 2023-08-03 235342](https://github.com/Kranox21/ChannelMachine/assets/11131166/20d5a248-9a6d-4d17-ba36-93ee8163e537)

## Attributes Settings:
- Within Attributes Settings will have two channel tabs
  - Pack Channels
  - Unpack Channels
- Each tab comes with settings along with a preview of input results

### Pack Channels:

![Screenshot 2023-08-23 204805](https://github.com/Kranox21/ChannelMachine/assets/11131166/ae8abc2f-deb8-44de-95c0-53fe1452b956)
- Enable Batch Settings
  - This will determine whether to set Texture input from an array list or indivisual inputs.
  - This will also determine if Channel Machine should Batch Generate or not.

![Screenshot 2023-08-23 205050](https://github.com/Kranox21/ChannelMachine/assets/11131166/9a05a817-4af8-4a52-9db4-babf6b420c26)

 - RGBA Preview
   - This will preview a low-resolution sample output from your inputs from RGB Inputs

  - Pack Settings
    - Enable Alpha Channel
      - Will show/hide Alpha Settings
      - Will determine whether to generate Alphas or not
      - ‘Note’ baking alpha channels will cost extra storage space and impact extra performance.
      - As of currently if you are trying to export into PNG without Alpha, the baking process will automatically set export write settings to JPG format, To bypass this enable alpha and fill with a blank white texture.
     - Channel Input
       - There are 4 channel inputs representing RGBA respectively
      - Channel Identifier Input
        - Enum or list of common inputs
          - Ambient Occlusion
          - Specular
          - Roughness
          - Opacity
          - Opacity Mask
          - Displacement
          - Emissive
     - Batch Pack Settings
       - Channel Batch Textures Input
         - Drop a batch of textures you wish to add into a particular channel
         - Must make sure the number of textures matches across all channels or the generator will encounter an error

 ### Unpack Channels:

![Screenshot 2023-08-23 205153](https://github.com/Kranox21/ChannelMachine/assets/11131166/a6ff31c1-190e-4928-b8fc-03d890d74443)

 - Grayscale Preview
   - Across the board will be 4 boxes of previews.
   - These boxes will be filled with one Packed Texture or Color map.
   - This will divide the color texture into 3 - 4 grayscale maps.
 
  - Channel Input Identifiers
    - Under each preview will be channel maps, you will make your channel selection there.
 
   - Unpack Settings
     - There will be one input which is the Packed Texture
     - When you add a texture it will update and preview the results of what 3 - 4 grayscale maps will look like.

## Export Settings:

![Screenshot 2023-08-23 205250](https://github.com/Kranox21/ChannelMachine/assets/11131166/6a222818-6294-439e-bf6c-52777a500c88)

- Project Folder Location
  - This is where you input your folder path where you wish to place your texture outputs will be.
  - You can input the path in the text box, or you can use the Signal Button next to it to Set the selected folder/asset location to the textbox

- Save Asset Settings
  - Asset Name
    - Set the name of your asset, don’t worry about prefix or suffix as the baking process will do that for you.
  - Compression Settings
    - By default is set to masks which are best settings for channels, but you can input any compress settings you wish.
  - Mipmap Settings
    - Is set to default FromTextureGroup but can put other setting or even no mipmaps if choose to
  - Resolution Width
    - Sets the resolution of texture from width by pixels
  - Resolution Height
    - Sets the resolution of the texture from height by pixels

- Export Settings
  - Can set the location of the export path to disk, which can be from within your computer or network location.
  - Click the Open Directory button will pop up a window to select a folder.
  - Select folder will apply the folder path to textbox and will use that location for exporting images, if empty the export process will be skipped altogether.

- Export Write Settings
  - Format
    - This will set the format of the textures when exporting
    - 'Note' if selected .PNG but don't enable alpha, will automatically set to .JPG, Assign white blank texture to Alpha in order to properly export for .PNG format.
  - Compression Quality
    - Whether the texture should be compressed or uncompressed
  - Overwrite File
    - Whether to overwrite a file that exists in the folder location or not
  - Async
    - This is a runtime feature mainly for games that can be on or off

## Config Settings

![Screenshot 2023-08-23 205330](https://github.com/Kranox21/ChannelMachine/assets/11131166/3149b00b-b38e-4e93-bcd3-1e063ccfb24a)

- Config Data
  - Config Data Settings is an Data Asset that stores the variable information, these will be your configuration presets. Open the drop down menu and will have number of options under the same parent blueprint name.
  - Preset Name This determines the name of your preset when you click the Save As button, Don't worry about setting prefix as will automatically add DA_ for you
  - Save will override the current data preset assigned in the Config Data Setting to the current setting in the Config Setup
  - Save As will take the current Config Setup variables and create a brand-new data asset for you with the given name you assigned

## Material Assembly:

![Screenshot 2023-08-04 000034](https://github.com/Kranox21/ChannelMachine/assets/11131166/ab912987-0a3f-49b3-ac1a-a437170689ee)

- Master Material Input
  - Determines the selected master material you wish to use to create a material instance
  - This will also take the current material instance you assign and convert it to its Master/Parent Material
  - You can fill this in optionally if you leave it blank, will skip this process altogether
 
- Assembly Textures
  - Base Color Input
    - Assign base color texture that will be applied to your material instance
  - Normal Map Input
    - Assign Normal map texture that will be applied to your material instance

- Dropdown Parameter Selections
  - These dropdowns will check all the parameters available from the Master Material input and would have to assign them to given properties
  - This will save time from manually assigning textures to material instances themselves
