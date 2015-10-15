{ pkgs ? import <nixpkgs> {}, ... }: 

with pkgs.stdenv.lib; with pkgs;

let
  unlines = strs: concatStrings ((map (x: x + "\n")) strs);


  native = ./build/linux;

in 
  pkgs.callPackage (
    {stdenv, mesa_glu, libX11, libXext, libXcursor, libXrandr, alsaLib, gcc}:
    stdenv.mkDerivation rec {
      name = "native";    
      phases = "installPhase";
      src = native;
      libs = [mesa_glu libX11 libXext libXcursor libXrandr alsaLib stdenv.cc.cc];

      installPhase = ''
        mkdir -p $out
        cp $src/* $out
        mkdir $out/lib
        ${unlines (map (lib: "ln -s ${lib}/lib/*.so* $out/lib") libs)}
        patchelf --set-interpreter $(cat $NIX_CC/nix-support/dynamic-linker) --set-rpath $out/lib $out/solemnsky
        
      '';
    }
  ) {}
