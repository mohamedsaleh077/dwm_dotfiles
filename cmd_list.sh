#! /bin/bash

choice=$(echo -e "Games:\n  Minecraft\n  Combat Master\nApps:\n  OnlyOffice\n  Discord\n  Postman\n  Netbeans\n  PHPSTORM\n\nPower" | dmenu -p "my best command list ;) " -l 69)

power(){
	mode=$(echo -e "shutdown\nreboot" | dmenu -p "power mode? Serious!?" -l 2)
	case "$mode" in
		shutdown) doas poweroff ;;
		reboot) doas reboot ;;
	esac
}


case "$choice" in 
	'  Minecraft' ) java -jar $HOME/games/ll.jar ;;
	'  Combat Master' ) $HOME/games/cm/CombatMaster.x86_64 ;;
	'  OnlyOffice' ) $HOME/apps/onlyoffice.AppImage ;;
	'  Discord' ) $HOME/apps/legcord.AppImage ;;
	'  Postman' ) $HOME/apps/postman/Postman ;;
	'  Netbeans' ) /home/mohamed/apps/netbeans/bin/netbeans ;;
	'  PHPSTORM' ) /home/mohamed/apps/phpstorm/bin/phpstorm ;;
	Power ) power  ;;
esac
