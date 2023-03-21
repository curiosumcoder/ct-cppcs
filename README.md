# Fundamentos en C++ y C#
Material relacionado con el curso de Fundamentos en C++ y C# impartido en UCenfotec (modalidad virtual) en Marzo 2023.

### Requerimientos de software
1.	Requisitos mínimos del hardware que ocupamos. 
	https://docs.microsoft.com/en-us/visualstudio/releases/2022/system-requirements
	
2.	Última versión del Microsoft .NET Core SDK
	https://dotnet.microsoft.com/en-us/download, el de 64bits aquí, 
	https://dotnet.microsoft.com/en-us/download/dotnet/thank-you/sdk-7.0.202-windows-x64-installer
	
	Utilizar el Windows Installer de acuerdo con la versión de Windows que se esté utilizando.
	
	Se debe efectuar una ejecución inicial para descargar los paquetes iniciales.
	
	Estos pasos crean una pequeña aplicación de línea de comandos que imprime la palabra “Hello World” en la consola. 
	
	Ejecutar desde la línea de comandos: 
	
	mkdir t1
	cd t1
	dotnet new console 

	En este paso puede aparecer un mensaje que señala que se están descargando los paquetes iniciales de .NET Core. 
	Esperar a que se complete la descarga.
		
	dotnet build
	dotnet run

4.	Microsoft Visual Studio Code 
	https://code.visualstudio.com/
	Instalar o actualizar a la última versión.
	
6.	Microsoft Visual Studio 2022 (edición Community o superior) 
	https://visualstudio.microsoft.com/downloads/
	https://docs.microsoft.com/en-us/visualstudio/install/install-visual-studio?view=vs-2022#install-workloads
	
	Aquí se documenta como obtener los instaladores para la instalación local, 
	https://docs.microsoft.com/en-us/visualstudio/install/create-a-network-installation-of-visual-studio?view=vs-2022, 
	esto baja todos los “workloads” pero al momento de instalar no se deben de instalar todos.
	
	Si el Visual Studio 2022 ya se encuentra instalado se puede utilizar el Visual Studio Installer, 
	para efectuar la actualización.

	Se deben instalar al menos los “workloads”: 
	- Web & Cloud 
		+ ASP.NET and web development
		+ Data storage and processing
		
	En caso de contar con una instalación del Visual Studio 2022, proceder con la actualización a la última versión, 
	y confirmar que se tengan instalados los “workloads” señalados en el punto anterior. Esto se hace ejecutando el 
	Visual Studio Installer, y aplicar en el equipo la actualización cuando aparece el botón “Update”, es solo de 
	aplicarlo y esperar que finalice.
 
	Se puede confirmar el resultado con el “Acerca de” de Visual Studio 2022.
	
De ser posible efectuar la instalación de las versiones del software con el idioma inglés, para unificar con la 
configuración utilizada por el profesor.
