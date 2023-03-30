get-childitem -Include bin -Recurse -force | Remove-Item -Force -Recurse;
get-childitem -Include obj -Recurse -force | Remove-Item -Force -Recurse;
get-childitem -Include dist -Recurse -force | Remove-Item -Force -Recurse;
get-childitem -Include packages -Recurse -force | Remove-Item -Force -Recurse;
get-childitem -Include node_modules -Recurse -force | Remove-Item -Force -Recurse;
get-childitem -Include bower_components -Recurse -force | Remove-Item -Force -Recurse;