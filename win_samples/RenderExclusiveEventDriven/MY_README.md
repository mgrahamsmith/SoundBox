# Render Exclusive Event Driven MS sample

This expected Visual Studio 2008.  No luck opening in VS 2019, and no luck with msbuild.

In it's current form, I get the error log:
```
$ cmake --build .
Microsoft (R) Build Engine version 16.8.1+bd2ea1e3c for .NET Framework
Copyright (C) Microsoft Corporation. All rights reserved.

  play.vcxproj -> \SoundBox\build\source\Debug\play.exe
  WASAPIRenderer.cpp
\SoundBox\win_samples\RenderExclusiveEventDriven\WASAPIRenderer.cpp(481,77): error C2664: 'HANDLE AvSetMmThreadCharacteristicsA(LPCSTR,LPDWORD)': cannot convert argument 1 from 'const wchar_t [6]' to 'LPCSTR' [\SoundBox\build\win_samples\RenderExclusiveEventDriven\renderExED.vcxproj]
\SoundBox\win_samples\RenderExclusiveEventDriven\WASAPIRenderer.cpp(481,52): message : Types pointed to are unrelated; conversion requires reinterpret_cast, C-style cast or function-style cast [\SoundBox\build\win_samples\RenderExclusiveEventDriven\renderExED.vcxproj]
C:\Program Files (x86)\Windows Kits\10\Include\10.0.19041.0\um\avrt.h(58,1): message : see declaration of 'AvSetMmThreadCharacteristicsA' [\SoundBox\build\win_samples\RenderExclusiveEventDriven\renderExED.vcxproj]
  WASAPIRenderExclusiveEventDriven.cpp
\SoundBox\win_samples\RenderExclusiveEventDriven\WASAPIRenderExclusiveEventDriven.cpp(104,143): error C2664: 'HRESULT StringCbPrintfA(STRSAFE_LPSTR,size_t,STRSAFE_LPCSTR,...)': cannot convert argument 1 from 'wchar_t [128]' to 'STRSAFE_LPSTR' [\SoundBox\build\win_samples\RenderExclusiveEventDriven\renderExED.vcxproj]
\SoundBox\win_samples\RenderExclusiveEventDriven\WASAPIRenderExclusiveEventDriven.cpp(104,25): message : Types pointed to are unrelated; conversion requires reinterpret_cast, C-style cast or function-style cast [\SoundBox\build\win_samples\RenderExclusiveEventDriven\renderExED.vcxproj]
C:\Program Files (x86)\Windows Kits\10\Include\10.0.19041.0\shared\strsafe.h(5272,5): message : see declaration of 'StringCbPrintfA' [\SoundBox\build\win_samples\RenderExclusiveEventDriven\renderExED.vcxproj]
  Generating Code...

```
