/* bgp_evpn_flood_control => "[no$no] flooding <disable$disable|head-end-replication$her>" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_flood_control)
#define funcdecl_bgp_evpn_flood_control static int bgp_evpn_flood_control_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * disable,\
	const char * her)
funcdecl_bgp_evpn_flood_control;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_flood_control)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *disable = NULL;
	const char *her = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "disable")) {
			disable = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "her")) {
			her = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bgp_evpn_flood_control_magic(self, vty, argc, argv, no, disable, her);
}

/* dup_addr_detection => "dup-addr-detection [max-moves (2-1000)$max_moves_val time (2-1800)$time_val]" */
DEFUN_CMD_FUNC_DECL(dup_addr_detection)
#define funcdecl_dup_addr_detection static int dup_addr_detection_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long max_moves_val,\
	const char * max_moves_val_str __attribute__ ((unused)),\
	long time_val,\
	const char * time_val_str __attribute__ ((unused)))
funcdecl_dup_addr_detection;
DEFUN_CMD_FUNC_TEXT(dup_addr_detection)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long max_moves_val = 0;
	const char *max_moves_val_str = NULL;
	long time_val = 0;
	const char *time_val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "max_moves_val")) {
			max_moves_val_str = argv[_i]->arg;
			char *_end;
			max_moves_val = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "time_val")) {
			time_val_str = argv[_i]->arg;
			char *_end;
			time_val = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return dup_addr_detection_magic(self, vty, argc, argv, max_moves_val, max_moves_val_str, time_val, time_val_str);
}

/* dup_addr_detection_auto_recovery => "dup-addr-detection freeze <permanent |(30-3600)$freeze_time_val>" */
DEFUN_CMD_FUNC_DECL(dup_addr_detection_auto_recovery)
#define funcdecl_dup_addr_detection_auto_recovery static int dup_addr_detection_auto_recovery_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long freeze_time_val,\
	const char * freeze_time_val_str __attribute__ ((unused)))
funcdecl_dup_addr_detection_auto_recovery;
DEFUN_CMD_FUNC_TEXT(dup_addr_detection_auto_recovery)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long freeze_time_val = 0;
	const char *freeze_time_val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "freeze_time_val")) {
			freeze_time_val_str = argv[_i]->arg;
			char *_end;
			freeze_time_val = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return dup_addr_detection_auto_recovery_magic(self, vty, argc, argv, freeze_time_val, freeze_time_val_str);
}

/* no_dup_addr_detection => "no dup-addr-detection [max-moves (2-1000)$max_moves_val time (2-1800)$time_val | freeze <permanent$permanent_val | (30-3600)$freeze_time_val>]" */
DEFUN_CMD_FUNC_DECL(no_dup_addr_detection)
#define funcdecl_no_dup_addr_detection static int no_dup_addr_detection_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long max_moves_val,\
	const char * max_moves_val_str __attribute__ ((unused)),\
	long time_val,\
	const char * time_val_str __attribute__ ((unused)),\
	const char * permanent_val,\
	long freeze_time_val,\
	const char * freeze_time_val_str __attribute__ ((unused)))
funcdecl_no_dup_addr_detection;
DEFUN_CMD_FUNC_TEXT(no_dup_addr_detection)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long max_moves_val = 0;
	const char *max_moves_val_str = NULL;
	long time_val = 0;
	const char *time_val_str = NULL;
	const char *permanent_val = NULL;
	long freeze_time_val = 0;
	const char *freeze_time_val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "max_moves_val")) {
			max_moves_val_str = argv[_i]->arg;
			char *_end;
			max_moves_val = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "time_val")) {
			time_val_str = argv[_i]->arg;
			char *_end;
			time_val = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "permanent_val")) {
			permanent_val = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "freeze_time_val")) {
			freeze_time_val_str = argv[_i]->arg;
			char *_end;
			freeze_time_val = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_dup_addr_detection_magic(self, vty, argc, argv, max_moves_val, max_moves_val_str, time_val, time_val_str, permanent_val, freeze_time_val, freeze_time_val_str);
}

/* bgp_evpn_advertise_svi_ip => "[no$no] advertise-svi-ip" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_advertise_svi_ip)
#define funcdecl_bgp_evpn_advertise_svi_ip static int bgp_evpn_advertise_svi_ip_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_evpn_advertise_svi_ip;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_advertise_svi_ip)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bgp_evpn_advertise_svi_ip_magic(self, vty, argc, argv, no);
}

/* bgp_evpn_advertise_svi_ip_vni => "[no$no] advertise-svi-ip" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_advertise_svi_ip_vni)
#define funcdecl_bgp_evpn_advertise_svi_ip_vni static int bgp_evpn_advertise_svi_ip_vni_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_evpn_advertise_svi_ip_vni;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_advertise_svi_ip_vni)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bgp_evpn_advertise_svi_ip_vni_magic(self, vty, argc, argv, no);
}

/* bgp_evpn_use_es_l3nhg => "[no$no] use-es-l3nhg" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_use_es_l3nhg)
#define funcdecl_bgp_evpn_use_es_l3nhg static int bgp_evpn_use_es_l3nhg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_evpn_use_es_l3nhg;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_use_es_l3nhg)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bgp_evpn_use_es_l3nhg_magic(self, vty, argc, argv, no);
}

/* bgp_evpn_ead_evi_rx_disable => "[no$no] disable-ead-evi-rx" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_ead_evi_rx_disable)
#define funcdecl_bgp_evpn_ead_evi_rx_disable static int bgp_evpn_ead_evi_rx_disable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_evpn_ead_evi_rx_disable;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_ead_evi_rx_disable)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bgp_evpn_ead_evi_rx_disable_magic(self, vty, argc, argv, no);
}

/* bgp_evpn_ead_evi_tx_disable => "[no$no] disable-ead-evi-tx" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_ead_evi_tx_disable)
#define funcdecl_bgp_evpn_ead_evi_tx_disable static int bgp_evpn_ead_evi_tx_disable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_evpn_ead_evi_tx_disable;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_ead_evi_tx_disable)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bgp_evpn_ead_evi_tx_disable_magic(self, vty, argc, argv, no);
}

/* bgp_evpn_enable_resolve_overlay_index => "[no$no] enable-resolve-overlay-index" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_enable_resolve_overlay_index)
#define funcdecl_bgp_evpn_enable_resolve_overlay_index static int bgp_evpn_enable_resolve_overlay_index_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_evpn_enable_resolve_overlay_index;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_enable_resolve_overlay_index)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bgp_evpn_enable_resolve_overlay_index_magic(self, vty, argc, argv, no);
}

/* bgp_evpn_advertise_pip_ip_mac => "[no$no] advertise-pip [ip <A.B.C.D> [mac <X:X:X:X:X:X|X:X:X:X:X:X/M>]]" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_advertise_pip_ip_mac)
#define funcdecl_bgp_evpn_advertise_pip_ip_mac static int bgp_evpn_advertise_pip_ip_mac_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr ip,\
	const char * ip_str __attribute__ ((unused)),\
	struct prefix_eth * mac,\
	const char * mac_str __attribute__ ((unused)))
funcdecl_bgp_evpn_advertise_pip_ip_mac;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_advertise_pip_ip_mac)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr ip = { INADDR_ANY };
	const char *ip_str = NULL;
	struct prefix_eth mac = { };
	const char *mac_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip);
		}
		if (!strcmp(argv[_i]->varname, "mac")) {
			mac_str = argv[_i]->arg;
			_fail = !str2prefix_eth(argv[_i]->arg, &mac);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bgp_evpn_advertise_pip_ip_mac_magic(self, vty, argc, argv, no, ip, ip_str, &mac, mac_str);
}

/* show_bgp_l2vpn_evpn_es_evi => "show bgp l2vpn evpn es-evi [vni (1-16777215)$vni] [json$uj] [detail$detail]" */
DEFUN_CMD_FUNC_DECL(show_bgp_l2vpn_evpn_es_evi)
#define funcdecl_show_bgp_l2vpn_evpn_es_evi static int show_bgp_l2vpn_evpn_es_evi_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vni,\
	const char * vni_str __attribute__ ((unused)),\
	const char * uj,\
	const char * detail)
funcdecl_show_bgp_l2vpn_evpn_es_evi;
DEFUN_CMD_FUNC_TEXT(show_bgp_l2vpn_evpn_es_evi)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vni = 0;
	const char *vni_str = NULL;
	const char *uj = NULL;
	const char *detail = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vni")) {
			vni_str = argv[_i]->arg;
			char *_end;
			vni = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_bgp_l2vpn_evpn_es_evi_magic(self, vty, argc, argv, vni, vni_str, uj, detail);
}

/* show_bgp_l2vpn_evpn_es => "show bgp l2vpn evpn es [NAME$esi_str|detail$detail] [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_bgp_l2vpn_evpn_es)
#define funcdecl_show_bgp_l2vpn_evpn_es static int show_bgp_l2vpn_evpn_es_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * esi_str,\
	const char * detail,\
	const char * uj)
funcdecl_show_bgp_l2vpn_evpn_es;
DEFUN_CMD_FUNC_TEXT(show_bgp_l2vpn_evpn_es)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *esi_str = NULL;
	const char *detail = NULL;
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_bgp_l2vpn_evpn_es_magic(self, vty, argc, argv, esi_str, detail, uj);
}

/* show_bgp_l2vpn_evpn_es_vrf => "show bgp l2vpn evpn es-vrf [NAME$esi_str] [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_bgp_l2vpn_evpn_es_vrf)
#define funcdecl_show_bgp_l2vpn_evpn_es_vrf static int show_bgp_l2vpn_evpn_es_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * esi_str,\
	const char * uj)
funcdecl_show_bgp_l2vpn_evpn_es_vrf;
DEFUN_CMD_FUNC_TEXT(show_bgp_l2vpn_evpn_es_vrf)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *esi_str = NULL;
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_bgp_l2vpn_evpn_es_vrf_magic(self, vty, argc, argv, esi_str, uj);
}

/* show_bgp_l2vpn_evpn_nh => "show bgp l2vpn evpn next-hops [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_bgp_l2vpn_evpn_nh)
#define funcdecl_show_bgp_l2vpn_evpn_nh static int show_bgp_l2vpn_evpn_nh_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * uj)
funcdecl_show_bgp_l2vpn_evpn_nh;
DEFUN_CMD_FUNC_TEXT(show_bgp_l2vpn_evpn_nh)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_bgp_l2vpn_evpn_nh_magic(self, vty, argc, argv, uj);
}

/* show_bgp_l2vpn_evpn_route_mac_ip_evi_es => "show bgp l2vpn evpn route mac-ip-evi-es [NAME$esi_str|detail$detail] [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_bgp_l2vpn_evpn_route_mac_ip_evi_es)
#define funcdecl_show_bgp_l2vpn_evpn_route_mac_ip_evi_es static int show_bgp_l2vpn_evpn_route_mac_ip_evi_es_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * esi_str,\
	const char * detail,\
	const char * uj)
funcdecl_show_bgp_l2vpn_evpn_route_mac_ip_evi_es;
DEFUN_CMD_FUNC_TEXT(show_bgp_l2vpn_evpn_route_mac_ip_evi_es)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *esi_str = NULL;
	const char *detail = NULL;
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_bgp_l2vpn_evpn_route_mac_ip_evi_es_magic(self, vty, argc, argv, esi_str, detail, uj);
}

/* show_bgp_l2vpn_evpn_route_mac_ip_global_es => "show bgp l2vpn evpn route mac-ip-global-es [NAME$esi_str|detail$detail] [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_bgp_l2vpn_evpn_route_mac_ip_global_es)
#define funcdecl_show_bgp_l2vpn_evpn_route_mac_ip_global_es static int show_bgp_l2vpn_evpn_route_mac_ip_global_es_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * esi_str,\
	const char * detail,\
	const char * uj)
funcdecl_show_bgp_l2vpn_evpn_route_mac_ip_global_es;
DEFUN_CMD_FUNC_TEXT(show_bgp_l2vpn_evpn_route_mac_ip_global_es)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *esi_str = NULL;
	const char *detail = NULL;
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_bgp_l2vpn_evpn_route_mac_ip_global_es_magic(self, vty, argc, argv, esi_str, detail, uj);
}

/* test_es_add => "[no$no] test es NAME$esi_str [state NAME$state_str]" */
DEFUN_CMD_FUNC_DECL(test_es_add)
#define funcdecl_test_es_add static int test_es_add_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * esi_str,\
	const char * state_str)
funcdecl_test_es_add;
DEFUN_CMD_FUNC_TEXT(test_es_add)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *esi_str = NULL;
	const char *state_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "state_str")) {
			state_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!esi_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "esi_str");
		return CMD_WARNING;
	}

	return test_es_add_magic(self, vty, argc, argv, no, esi_str, state_str);
}

/* test_es_vni_add => "[no$no] test es NAME$esi_str vni (1-16777215)$vni" */
DEFUN_CMD_FUNC_DECL(test_es_vni_add)
#define funcdecl_test_es_vni_add static int test_es_vni_add_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * esi_str,\
	long vni,\
	const char * vni_str __attribute__ ((unused)))
funcdecl_test_es_vni_add;
DEFUN_CMD_FUNC_TEXT(test_es_vni_add)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *esi_str = NULL;
	long vni = 0;
	const char *vni_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vni")) {
			vni_str = argv[_i]->arg;
			char *_end;
			vni = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!esi_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "esi_str");
		return CMD_WARNING;
	}
	if (!vni_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vni_str");
		return CMD_WARNING;
	}

	return test_es_vni_add_magic(self, vty, argc, argv, no, esi_str, vni, vni_str);
}

/* bgp_evpn_vrf_rt_auto => "route-target <both|import|export>$type auto" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_vrf_rt_auto)
#define funcdecl_bgp_evpn_vrf_rt_auto static int bgp_evpn_vrf_rt_auto_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type)
funcdecl_bgp_evpn_vrf_rt_auto;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_vrf_rt_auto)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!type) {
		vty_out(vty, "Internal CLI error [%s]\n", "type");
		return CMD_WARNING;
	}

	return bgp_evpn_vrf_rt_auto_magic(self, vty, argc, argv, type);
}

/* no_bgp_evpn_vrf_rt_auto => "no route-target <both|import|export>$type auto" */
DEFUN_CMD_FUNC_DECL(no_bgp_evpn_vrf_rt_auto)
#define funcdecl_no_bgp_evpn_vrf_rt_auto static int no_bgp_evpn_vrf_rt_auto_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type)
funcdecl_no_bgp_evpn_vrf_rt_auto;
DEFUN_CMD_FUNC_TEXT(no_bgp_evpn_vrf_rt_auto)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!type) {
		vty_out(vty, "Internal CLI error [%s]\n", "type");
		return CMD_WARNING;
	}

	return no_bgp_evpn_vrf_rt_auto_magic(self, vty, argc, argv, type);
}

/* bgp_evpn_ead_ess_frag_evi_limit => "[no$no] ead-es-frag evi-limit (1-1000)$limit" */
DEFUN_CMD_FUNC_DECL(bgp_evpn_ead_ess_frag_evi_limit)
#define funcdecl_bgp_evpn_ead_ess_frag_evi_limit static int bgp_evpn_ead_ess_frag_evi_limit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long limit,\
	const char * limit_str __attribute__ ((unused)))
funcdecl_bgp_evpn_ead_ess_frag_evi_limit;
DEFUN_CMD_FUNC_TEXT(bgp_evpn_ead_ess_frag_evi_limit)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long limit = 0;
	const char *limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "limit")) {
			limit_str = argv[_i]->arg;
			char *_end;
			limit = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!limit_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "limit_str");
		return CMD_WARNING;
	}

	return bgp_evpn_ead_ess_frag_evi_limit_magic(self, vty, argc, argv, no, limit, limit_str);
}

