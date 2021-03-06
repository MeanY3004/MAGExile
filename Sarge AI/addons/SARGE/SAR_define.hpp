/*
	# Original #
	Sarge AI System 1.5
	Created for Arma 2: DayZ Mod
	Author: Sarge
	https://github.com/Swiss-Sarge

	# Fork #
	Sarge AI System 2.0+
	Modded for Arma 3: Exile Mod
	Changes: Dango
	http://www.hod-servers.com

*/
class CfgIdentities {
	class id_SAR {
		name = "Givens";
        nameSound = "Givens";
        face="WhiteHead_06";
		glasses="None";
		speaker="Male05ENG";
		pitch=1.1;
	};
	class id_SAR_band : id_SAR {
		name = "Habibi";
		face = "PersianHead_A3_02";
	};
	class id_SAR_sold_lead : id_SAR {
		name = "Snake";
		face = "NATOHead_01";
	};
	class id_SAR_sold_man : id_SAR {
		name = "Ghost";
		face = "NATOHead_01";
	};
	class id_SAR_surv_lead : id_SAR {
		name = "Martinez";
		face = "WhiteHead_02";
	};
	class id_SAR_surv_man : id_SAR {
		name = "Franklin";
		face = "WhiteHead_04";
	};
};