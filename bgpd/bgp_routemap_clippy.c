/* match_vrl_source_vrf => "match source-vrf NAME$vrf_name" */
DEFUN_CMD_FUNC_DECL(match_vrl_source_vrf)
#define funcdecl_match_vrl_source_vrf static int match_vrl_source_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name)
funcdecl_match_vrl_source_vrf;
DEFUN_CMD_FUNC_TEXT(match_vrl_source_vrf)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!vrf_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrf_name");
		return CMD_WARNING;
	}

	return match_vrl_source_vrf_magic(self, vty, argc, argv, vrf_name);
}

/* no_match_vrl_source_vrf => "no match source-vrf NAME$vrf_name" */
DEFUN_CMD_FUNC_DECL(no_match_vrl_source_vrf)
#define funcdecl_no_match_vrl_source_vrf static int no_match_vrl_source_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name)
funcdecl_no_match_vrl_source_vrf;
DEFUN_CMD_FUNC_TEXT(no_match_vrl_source_vrf)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!vrf_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrf_name");
		return CMD_WARNING;
	}

	return no_match_vrl_source_vrf_magic(self, vty, argc, argv, vrf_name);
}

/* match_peer => "match peer <A.B.C.D$addrv4|X:X::X:X$addrv6|WORD$intf>" */
DEFUN_CMD_FUNC_DECL(match_peer)
#define funcdecl_match_peer static int match_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr addrv4,\
	const char * addrv4_str __attribute__ ((unused)),\
	struct in6_addr addrv6,\
	const char * addrv6_str __attribute__ ((unused)),\
	const char * intf)
funcdecl_match_peer;
DEFUN_CMD_FUNC_TEXT(match_peer)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr addrv4 = { INADDR_ANY };
	const char *addrv4_str = NULL;
	struct in6_addr addrv6 = {};
	const char *addrv6_str = NULL;
	const char *intf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "addrv4")) {
			addrv4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &addrv4);
		}
		if (!strcmp(argv[_i]->varname, "addrv6")) {
			addrv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &addrv6);
		}
		if (!strcmp(argv[_i]->varname, "intf")) {
			intf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return match_peer_magic(self, vty, argc, argv, addrv4, addrv4_str, addrv6, addrv6_str, intf);
}

/* match_ip_route_source => "match ip route-source ACCESSLIST4_NAME" */
DEFUN_CMD_FUNC_DECL(match_ip_route_source)
#define funcdecl_match_ip_route_source static int match_ip_route_source_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * accesslist4_name)
funcdecl_match_ip_route_source;
DEFUN_CMD_FUNC_TEXT(match_ip_route_source)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *accesslist4_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "accesslist4_name")) {
			accesslist4_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!accesslist4_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "accesslist4_name");
		return CMD_WARNING;
	}

	return match_ip_route_source_magic(self, vty, argc, argv, accesslist4_name);
}

/* match_community => "match community <(1-99)|(100-500)|COMMUNITY_LIST_NAME> [exact-match]" */
DEFUN_CMD_FUNC_DECL(match_community)
#define funcdecl_match_community static int match_community_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long community,\
	const char * community_str __attribute__ ((unused)),\
	const char * community_list_name)
funcdecl_match_community;
DEFUN_CMD_FUNC_TEXT(match_community)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long community = 0;
	const char *community_str = NULL;
	const char *community_list_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "community")) {
			community_str = argv[_i]->arg;
			char *_end;
			community = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "community_list_name")) {
			community_list_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return match_community_magic(self, vty, argc, argv, community, community_str, community_list_name);
}

/* match_lcommunity => "match large-community <(1-99)|(100-500)|LCOMMUNITY_LIST_NAME> [exact-match]" */
DEFUN_CMD_FUNC_DECL(match_lcommunity)
#define funcdecl_match_lcommunity static int match_lcommunity_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long large_community,\
	const char * large_community_str __attribute__ ((unused)),\
	const char * lcommunity_list_name)
funcdecl_match_lcommunity;
DEFUN_CMD_FUNC_TEXT(match_lcommunity)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long large_community = 0;
	const char *large_community_str = NULL;
	const char *lcommunity_list_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "large_community")) {
			large_community_str = argv[_i]->arg;
			char *_end;
			large_community = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "lcommunity_list_name")) {
			lcommunity_list_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return match_lcommunity_magic(self, vty, argc, argv, large_community, large_community_str, lcommunity_list_name);
}

/* match_ecommunity => "match extcommunity <(1-99)|(100-500)|EXTCOMMUNITY_LIST_NAME>" */
DEFUN_CMD_FUNC_DECL(match_ecommunity)
#define funcdecl_match_ecommunity static int match_ecommunity_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long extcommunity,\
	const char * extcommunity_str __attribute__ ((unused)),\
	const char * extcommunity_list_name)
funcdecl_match_ecommunity;
DEFUN_CMD_FUNC_TEXT(match_ecommunity)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long extcommunity = 0;
	const char *extcommunity_str = NULL;
	const char *extcommunity_list_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "extcommunity")) {
			extcommunity_str = argv[_i]->arg;
			char *_end;
			extcommunity = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "extcommunity_list_name")) {
			extcommunity_list_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return match_ecommunity_magic(self, vty, argc, argv, extcommunity, extcommunity_str, extcommunity_list_name);
}

/* set_l3vpn_nexthop_encapsulation => "[no] set l3vpn next-hop encapsulation gre" */
DEFUN_CMD_FUNC_DECL(set_l3vpn_nexthop_encapsulation)
#define funcdecl_set_l3vpn_nexthop_encapsulation static int set_l3vpn_nexthop_encapsulation_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_set_l3vpn_nexthop_encapsulation;
DEFUN_CMD_FUNC_TEXT(set_l3vpn_nexthop_encapsulation)
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

	return set_l3vpn_nexthop_encapsulation_magic(self, vty, argc, argv, no);
}

/* set_aspath_replace_asn => "set as-path replace <any|(1-4294967295)>$replace" */
DEFUN_CMD_FUNC_DECL(set_aspath_replace_asn)
#define funcdecl_set_aspath_replace_asn static int set_aspath_replace_asn_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * replace)
funcdecl_set_aspath_replace_asn;
DEFUN_CMD_FUNC_TEXT(set_aspath_replace_asn)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *replace = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "replace")) {
			replace = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!replace) {
		vty_out(vty, "Internal CLI error [%s]\n", "replace");
		return CMD_WARNING;
	}

	return set_aspath_replace_asn_magic(self, vty, argc, argv, replace);
}

/* no_set_aspath_replace_asn => "no set as-path replace [<any|(1-4294967295)>]" */
DEFUN_CMD_FUNC_DECL(no_set_aspath_replace_asn)
#define funcdecl_no_set_aspath_replace_asn static int no_set_aspath_replace_asn_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long replace,\
	const char * replace_str __attribute__ ((unused)))
funcdecl_no_set_aspath_replace_asn;
DEFUN_CMD_FUNC_TEXT(no_set_aspath_replace_asn)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long replace = 0;
	const char *replace_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "replace")) {
			replace_str = argv[_i]->arg;
			char *_end;
			replace = strtol(argv[_i]->arg, &_end, 10);
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

	return no_set_aspath_replace_asn_magic(self, vty, argc, argv, replace, replace_str);
}

/* set_community_delete => "set comm-list <(1-99)|(100-500)|COMMUNITY_LIST_NAME> delete" */
DEFUN_CMD_FUNC_DECL(set_community_delete)
#define funcdecl_set_community_delete static int set_community_delete_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long comm_list,\
	const char * comm_list_str __attribute__ ((unused)),\
	const char * community_list_name)
funcdecl_set_community_delete;
DEFUN_CMD_FUNC_TEXT(set_community_delete)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long comm_list = 0;
	const char *comm_list_str = NULL;
	const char *community_list_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "comm_list")) {
			comm_list_str = argv[_i]->arg;
			char *_end;
			comm_list = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "community_list_name")) {
			community_list_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return set_community_delete_magic(self, vty, argc, argv, comm_list, comm_list_str, community_list_name);
}

/* set_lcommunity_delete => "set large-comm-list <(1-99)|(100-500)|LCOMMUNITY_LIST_NAME> delete" */
DEFUN_CMD_FUNC_DECL(set_lcommunity_delete)
#define funcdecl_set_lcommunity_delete static int set_lcommunity_delete_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long large_comm_list,\
	const char * large_comm_list_str __attribute__ ((unused)),\
	const char * lcommunity_list_name)
funcdecl_set_lcommunity_delete;
DEFUN_CMD_FUNC_TEXT(set_lcommunity_delete)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long large_comm_list = 0;
	const char *large_comm_list_str = NULL;
	const char *lcommunity_list_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "large_comm_list")) {
			large_comm_list_str = argv[_i]->arg;
			char *_end;
			large_comm_list = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "lcommunity_list_name")) {
			lcommunity_list_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return set_lcommunity_delete_magic(self, vty, argc, argv, large_comm_list, large_comm_list_str, lcommunity_list_name);
}

/* match_ipv4_next_hop => "match ip next-hop address A.B.C.D" */
DEFUN_CMD_FUNC_DECL(match_ipv4_next_hop)
#define funcdecl_match_ipv4_next_hop static int match_ipv4_next_hop_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr address,\
	const char * address_str __attribute__ ((unused)))
funcdecl_match_ipv4_next_hop;
DEFUN_CMD_FUNC_TEXT(match_ipv4_next_hop)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr address = { INADDR_ANY };
	const char *address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &address);
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
	if (!address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "address_str");
		return CMD_WARNING;
	}

	return match_ipv4_next_hop_magic(self, vty, argc, argv, address, address_str);
}

/* no_match_ipv4_next_hop => "no match ip next-hop address [A.B.C.D]" */
DEFUN_CMD_FUNC_DECL(no_match_ipv4_next_hop)
#define funcdecl_no_match_ipv4_next_hop static int no_match_ipv4_next_hop_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr address,\
	const char * address_str __attribute__ ((unused)))
funcdecl_no_match_ipv4_next_hop;
DEFUN_CMD_FUNC_TEXT(no_match_ipv4_next_hop)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr address = { INADDR_ANY };
	const char *address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &address);
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

	return no_match_ipv4_next_hop_magic(self, vty, argc, argv, address, address_str);
}

/* match_rpki_extcommunity => "[no$no] match rpki-extcommunity <valid|invalid|notfound>" */
DEFUN_CMD_FUNC_DECL(match_rpki_extcommunity)
#define funcdecl_match_rpki_extcommunity static int match_rpki_extcommunity_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_match_rpki_extcommunity;
DEFUN_CMD_FUNC_TEXT(match_rpki_extcommunity)
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

	return match_rpki_extcommunity_magic(self, vty, argc, argv, no);
}

