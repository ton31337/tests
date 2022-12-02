/* debug_bgp_update_prefix_afi_safi => "debug bgp updates prefix l2vpn$afi evpn$safi type <<macip|2> mac <X:X:X:X:X:X|X:X:X:X:X:X/M> [ip <A.B.C.D|X:X::X:X>]|<multicast|3> ip <A.B.C.D|X:X::X:X>|<prefix|5> ip <A.B.C.D/M|X:X::X:X/M>>" */
DEFUN_CMD_FUNC_DECL(debug_bgp_update_prefix_afi_safi)
#define funcdecl_debug_bgp_update_prefix_afi_safi static int debug_bgp_update_prefix_afi_safi_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * afi,\
	const char * safi,\
	struct prefix_eth * mac,\
	const char * mac_str __attribute__ ((unused)),\
	const char * ip)
funcdecl_debug_bgp_update_prefix_afi_safi;
DEFUN_CMD_FUNC_TEXT(debug_bgp_update_prefix_afi_safi)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *afi = NULL;
	const char *safi = NULL;
	struct prefix_eth mac = { };
	const char *mac_str = NULL;
	const char *ip = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "afi")) {
			afi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "safi")) {
			safi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mac")) {
			mac_str = argv[_i]->arg;
			_fail = !str2prefix_eth(argv[_i]->arg, &mac);
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!afi) {
		vty_out(vty, "Internal CLI error [%s]\n", "afi");
		return CMD_WARNING;
	}
	if (!safi) {
		vty_out(vty, "Internal CLI error [%s]\n", "safi");
		return CMD_WARNING;
	}

	return debug_bgp_update_prefix_afi_safi_magic(self, vty, argc, argv, afi, safi, &mac, mac_str, ip);
}

/* no_debug_bgp_update_prefix_afi_safi => "no debug bgp updates prefix l2vpn$afi evpn$safi type <<macip|2> mac <X:X:X:X:X:X|X:X:X:X:X:X/M> [ip <A.B.C.D|X:X::X:X>]|<multicast|3> ip <A.B.C.D|X:X::X:X>|<prefix|5> ip <A.B.C.D/M|X:X::X:X/M>>" */
DEFUN_CMD_FUNC_DECL(no_debug_bgp_update_prefix_afi_safi)
#define funcdecl_no_debug_bgp_update_prefix_afi_safi static int no_debug_bgp_update_prefix_afi_safi_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * afi,\
	const char * safi,\
	struct prefix_eth * mac,\
	const char * mac_str __attribute__ ((unused)),\
	const char * ip)
funcdecl_no_debug_bgp_update_prefix_afi_safi;
DEFUN_CMD_FUNC_TEXT(no_debug_bgp_update_prefix_afi_safi)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *afi = NULL;
	const char *safi = NULL;
	struct prefix_eth mac = { };
	const char *mac_str = NULL;
	const char *ip = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "afi")) {
			afi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "safi")) {
			safi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mac")) {
			mac_str = argv[_i]->arg;
			_fail = !str2prefix_eth(argv[_i]->arg, &mac);
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!afi) {
		vty_out(vty, "Internal CLI error [%s]\n", "afi");
		return CMD_WARNING;
	}
	if (!safi) {
		vty_out(vty, "Internal CLI error [%s]\n", "safi");
		return CMD_WARNING;
	}

	return no_debug_bgp_update_prefix_afi_safi_magic(self, vty, argc, argv, afi, safi, &mac, mac_str, ip);
}

/* debug_bgp_evpn_mh => "[no$no] debug bgp evpn mh <es$es|route$rt>" */
DEFUN_CMD_FUNC_DECL(debug_bgp_evpn_mh)
#define funcdecl_debug_bgp_evpn_mh static int debug_bgp_evpn_mh_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * es,\
	const char * rt)
funcdecl_debug_bgp_evpn_mh;
DEFUN_CMD_FUNC_TEXT(debug_bgp_evpn_mh)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *es = NULL;
	const char *rt = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "es")) {
			es = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rt")) {
			rt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return debug_bgp_evpn_mh_magic(self, vty, argc, argv, no, es, rt);
}

/* debug_bgp_optimal_route_reflection => "[no$no] debug bgp optimal-route-reflection" */
DEFUN_CMD_FUNC_DECL(debug_bgp_optimal_route_reflection)
#define funcdecl_debug_bgp_optimal_route_reflection static int debug_bgp_optimal_route_reflection_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_bgp_optimal_route_reflection;
DEFUN_CMD_FUNC_TEXT(debug_bgp_optimal_route_reflection)
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

	return debug_bgp_optimal_route_reflection_magic(self, vty, argc, argv, no);
}

/* debug_bgp_bfd => "[no] debug bgp bfd" */
DEFUN_CMD_FUNC_DECL(debug_bgp_bfd)
#define funcdecl_debug_bgp_bfd static int debug_bgp_bfd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_bgp_bfd;
DEFUN_CMD_FUNC_TEXT(debug_bgp_bfd)
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

	return debug_bgp_bfd_magic(self, vty, argc, argv, no);
}

/* debug_bgp_cond_adv => "[no$no] debug bgp conditional-advertisement" */
DEFUN_CMD_FUNC_DECL(debug_bgp_cond_adv)
#define funcdecl_debug_bgp_cond_adv static int debug_bgp_cond_adv_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_bgp_cond_adv;
DEFUN_CMD_FUNC_TEXT(debug_bgp_cond_adv)
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

	return debug_bgp_cond_adv_magic(self, vty, argc, argv, no);
}

