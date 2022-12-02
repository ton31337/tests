/* zebra_evpn_es_bypass => "[no] evpn mh bypass" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_es_bypass)
#define funcdecl_zebra_evpn_es_bypass static int zebra_evpn_es_bypass_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_zebra_evpn_es_bypass;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_es_bypass)
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

	return zebra_evpn_es_bypass_magic(self, vty, argc, argv, no);
}

/* zebra_evpn_es_pref => "[no$no] evpn mh es-df-pref [(1-65535)$df_pref]" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_es_pref)
#define funcdecl_zebra_evpn_es_pref static int zebra_evpn_es_pref_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long df_pref,\
	const char * df_pref_str __attribute__ ((unused)))
funcdecl_zebra_evpn_es_pref;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_es_pref)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long df_pref = 0;
	const char *df_pref_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "df_pref")) {
			df_pref_str = argv[_i]->arg;
			char *_end;
			df_pref = strtol(argv[_i]->arg, &_end, 10);
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

	return zebra_evpn_es_pref_magic(self, vty, argc, argv, no, df_pref, df_pref_str);
}

/* zebra_evpn_es_sys_mac => "[no$no] evpn mh es-sys-mac [X:X:X:X:X:X$mac]" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_es_sys_mac)
#define funcdecl_zebra_evpn_es_sys_mac static int zebra_evpn_es_sys_mac_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct prefix_eth * mac,\
	const char * mac_str __attribute__ ((unused)))
funcdecl_zebra_evpn_es_sys_mac;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_es_sys_mac)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
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

	return zebra_evpn_es_sys_mac_magic(self, vty, argc, argv, no, &mac, mac_str);
}

/* zebra_evpn_es_id => "[no$no] evpn mh es-id [(1-16777215)$es_lid | NAME$esi_str]" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_es_id)
#define funcdecl_zebra_evpn_es_id static int zebra_evpn_es_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long es_lid,\
	const char * es_lid_str __attribute__ ((unused)),\
	const char * esi_str)
funcdecl_zebra_evpn_es_id;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_es_id)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long es_lid = 0;
	const char *es_lid_str = NULL;
	const char *esi_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "es_lid")) {
			es_lid_str = argv[_i]->arg;
			char *_end;
			es_lid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return zebra_evpn_es_id_magic(self, vty, argc, argv, no, es_lid, es_lid_str, esi_str);
}

/* zebra_evpn_mh_uplink => "[no] evpn mh uplink" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_mh_uplink)
#define funcdecl_zebra_evpn_mh_uplink static int zebra_evpn_mh_uplink_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_zebra_evpn_mh_uplink;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_mh_uplink)
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

	return zebra_evpn_mh_uplink_magic(self, vty, argc, argv, no);
}

