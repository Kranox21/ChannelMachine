# Channel Machine
## Texture packing and unpacking tool built-in Unreal Engine


## Getting Started:
- To open the Channel Machine Editor click the icon at the top of the toolbar to launch the Utility Widget Tool

- A new window will pop up, you can use the window as is, or what I personally do is Dock the window along Details and World Settings.



## Attributes Settings:
- Within Attributes Settings will have two channel tabs
  - Pack Channels
  - Unpack Channels
- Each tab comes with settings along with a preview of input results


### Pack Channels:

- Enable Batch Settings
  - This will determine whether to set Texture input from a list or individually.
  - This will also determine if Channel Machine should Batch Bake or not.

 - RGBA Preview
   - This will preview a low-resolution sample output from your inputs from RGB Inputs

  - Pack Settings
    - Enable Alpha Channel
      - Will show/hide Alpha Settings
      - Will determine whether to bake Alphas or not
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
         - Must make sure the number of textures matches across all channels or the bake will encounter an error

 ### Unpack Channels:

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
    - This is a runtime feature mainly for games can be on or off
