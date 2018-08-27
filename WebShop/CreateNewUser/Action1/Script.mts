Const ForAppending = 8
Dim lngRND
Randomize
lngRND = int ((1000000000+1)*rnd)

'Browser("PrestaShop Demo").Page("PrestaShop Demo").Link("HideShow").Click
Browser("PrestaShop Demo_2").Page("PrestaShop Demo").WebElement("Hide").Click
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame").Link(" Sign in").Click
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame_2").Link("No account? Create one").Click
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame_3").WebEdit("firstname").Set "FirstName" 
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame_3").WebEdit("lastname").Set "LastName"
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame_3").WebEdit("email").Set "mail" & lngRND & "@mail.com" @@ hightlight id_;_Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame 3").WebEdit("email")_;_script infofile_;_ZIP::ssf6.xml_;_
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame_3").WebEdit("password").SetSecure "5b7d1369b22f318779627736662823f89539e6c39a1d3a74"
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame_3").WebButton("Save").Click
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame_4").Link(" Sign out").Check CheckPoint(" Sign out")
Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame_4").Link(" Sign out").Click

Set objFileToWrite = CreateObject("Scripting.FileSystemObject").OpenTextFile("C:\temp\userslog.txt",ForAppending,true)
objFileToWrite.WriteLine("mail" & lngRND & "@mail.com" & ";" & "5b7d1369b22f318779627736662823f89539e6c39a1d3a74") @@ hightlight id_;_Browser("PrestaShop Demo").Page("PrestaShop Demo").Frame("Frame 3").WebEdit("email")_;_script infofile_;_ZIP::ssf6.xml_;_
objFileToWrite.Close
Set objFileToWrite = Nothing


