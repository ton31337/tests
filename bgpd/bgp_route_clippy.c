/* bgp_network => "[no] network 	<A.B.C.D/M$prefix|A.B.C.D$address [mask A.B.C.D$netmask]> 	[{route-map RMAP_NAME$map_name|label-index (0-1048560)$label_index| 	backdoor$backdoor}]" */
DEFUN_CMD_FUNC_DECL(bgp_network)
#define funcdecl_bgp_network static int bgp_network_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	struct in_addr address,\
	const char * address_str __attribute__ ((unused)),\
	struct in_addr netmask,\
	const char * netmask_str __attribute__ ((unused)),\
	const char * map_name,\
	long label_index,\
	const char * label_index_str __attribute__ ((unused)),\
	const char * backdoor)
funcdecl_bgp_network;
DEFUN_CMD_FUNC_TEXT(bgp_network)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;
	struct in_addr address = { INADDR_ANY };
	const char *address_str = NULL;
	struct in_addr netmask = { INADDR_ANY };
	const char *netmask_str = NULL;
	const char *map_name = NULL;
	long label_index = 0;
	const char *label_index_str = NULL;
	const char *backdoor = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &address);
		}
		if (!strcmp(argv[_i]->varname, "netmask")) {
			netmask_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &netmask);
		}
		if (!strcmp(argv[_i]->varname, "map_name")) {
			map_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label_index")) {
			label_index_str = argv[_i]->arg;
			char *_end;
			label_index = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "backdoor")) {
			backdoor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return bgp_network_magic(self, vty, argc, argv, no, &prefix, prefix_str, address, address_str, netmask, netmask_str, map_name, label_index, label_index_str, backdoor);
}

/* ipv6_bgp_network => "[no] network X:X::X:X/M$prefix 	[{route-map RMAP_NAME$map_name|label-index (0-1048560)$label_index}]" */
DEFUN_CMD_FUNC_DECL(ipv6_bgp_network)
#define funcdecl_ipv6_bgp_network static int ipv6_bgp_network_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * map_name,\
	long label_index,\
	const char * label_index_str __attribute__ ((unused)))
funcdecl_ipv6_bgp_network;
DEFUN_CMD_FUNC_TEXT(ipv6_bgp_network)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	const char *map_name = NULL;
	long label_index = 0;
	const char *label_index_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "map_name")) {
			map_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label_index")) {
			label_index_str = argv[_i]->arg;
			char *_end;
			label_index = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return ipv6_bgp_network_magic(self, vty, argc, argv, no, &prefix, prefix_str, map_name, label_index, label_index_str);
}

/* aggregate_addressv4 => "[no] aggregate-address <A.B.C.D/M$prefix|A.B.C.D$addr A.B.C.D$mask> [{as-set$as_set_s|summary-only$summary_only|route-map RMAP_NAME$rmap_name|origin <egp|igp|incomplete>$origin_s|matching-MED-only$match_med|suppress-map RMAP_NAME$suppress_map}]" */
DEFUN_CMD_FUNC_DECL(aggregate_addressv4)
#define funcdecl_aggregate_addressv4 static int aggregate_addressv4_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	struct in_addr addr,\
	const char * addr_str __attribute__ ((unused)),\
	struct in_addr mask,\
	const char * mask_str __attribute__ ((unused)),\
	const char * as_set_s,\
	const char * summary_only,\
	const char * rmap_name,\
	const char * origin_s,\
	const char * match_med,\
	const char * suppress_map)
funcdecl_aggregate_addressv4;
DEFUN_CMD_FUNC_TEXT(aggregate_addressv4)
{
#if 10 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;
	struct in_addr addr = { INADDR_ANY };
	const char *addr_str = NULL;
	struct in_addr mask = { INADDR_ANY };
	const char *mask_str = NULL;
	const char *as_set_s = NULL;
	const char *summary_only = NULL;
	const char *rmap_name = NULL;
	const char *origin_s = NULL;
	const char *match_med = NULL;
	const char *suppress_map = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "addr")) {
			addr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &addr);
		}
		if (!strcmp(argv[_i]->varname, "mask")) {
			mask_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &mask);
		}
		if (!strcmp(argv[_i]->varname, "as_set_s")) {
			as_set_s = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "summary_only")) {
			summary_only = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap_name")) {
			rmap_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "origin_s")) {
			origin_s = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "match_med")) {
			match_med = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "suppress_map")) {
			suppress_map = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return aggregate_addressv4_magic(self, vty, argc, argv, no, &prefix, prefix_str, addr, addr_str, mask, mask_str, as_set_s, summary_only, rmap_name, origin_s, match_med, suppress_map);
}

/* aggregate_addressv6 => "[no] aggregate-address X:X::X:X/M$prefix [{as-set$as_set_s|summary-only$summary_only|route-map RMAP_NAME$rmap_name|origin <egp|igp|incomplete>$origin_s|matching-MED-only$match_med|suppress-map RMAP_NAME$suppress_map}]" */
DEFUN_CMD_FUNC_DECL(aggregate_addressv6)
#define funcdecl_aggregate_addressv6 static int aggregate_addressv6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * as_set_s,\
	const char * summary_only,\
	const char * rmap_name,\
	const char * origin_s,\
	const char * match_med,\
	const char * suppress_map)
funcdecl_aggregate_addressv6;
DEFUN_CMD_FUNC_TEXT(aggregate_addressv6)
{
#if 8 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	const char *as_set_s = NULL;
	const char *summary_only = NULL;
	const char *rmap_name = NULL;
	const char *origin_s = NULL;
	const char *match_med = NULL;
	const char *suppress_map = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "as_set_s")) {
			as_set_s = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "summary_only")) {
			summary_only = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap_name")) {
			rmap_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "origin_s")) {
			origin_s = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "match_med")) {
			match_med = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "suppress_map")) {
			suppress_map = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return aggregate_addressv6_magic(self, vty, argc, argv, no, &prefix, prefix_str, as_set_s, summary_only, rmap_name, origin_s, match_med, suppress_map);
}

/* show_ip_bgp_dampening_params => "show [ip] bgp [<view|vrf> VIEWVRFNAME] [<ipv4|ipv6> [<unicast|multicast|vpn|labeled-unicast|flowspec>]] [all$all] dampening parameters [json]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_dampening_params)
#define funcdecl_show_ip_bgp_dampening_params static int show_ip_bgp_dampening_params_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * viewvrfname,\
	const char * all)
funcdecl_show_ip_bgp_dampening_params;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_dampening_params)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *viewvrfname = NULL;
	const char *all = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "viewvrfname")) {
			viewvrfname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "all")) {
			all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_bgp_dampening_params_magic(self, vty, argc, argv, viewvrfname, all);
}

/* show_ip_bgp => "show [ip] bgp [<view|vrf> VIEWVRFNAME] [<ipv4|ipv6> [<unicast|multicast|vpn|labeled-unicast|flowspec>]]          [all$all]          [cidr-only          |dampening <flap-statistics|dampened-paths>          |community [AA:NN|local-AS|no-advertise|no-export                     |graceful-shutdown|no-peer|blackhole|llgr-stale|no-llgr                     |accept-own|accept-own-nexthop|route-filter-v6                     |route-filter-v4|route-filter-translated-v6                     |route-filter-translated-v4] [exact-match]          |community-list <(1-500)|COMMUNITY_LIST_NAME> [exact-match]          |filter-list AS_PATH_FILTER_NAME          |prefix-list WORD          |access-list ACCESSLIST_NAME          |route-map RMAP_NAME          |rpki <invalid|valid|notfound>          |version (1-4294967295)          |alias ALIAS_NAME          |A.B.C.D/M longer-prefixes          |X:X::X:X/M longer-prefixes	  |optimal-route-reflection [WORD$orr_group_name]          ] [json$uj [detail$detail] | wide$wide]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp)
#define funcdecl_show_ip_bgp static int show_ip_bgp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * viewvrfname,\
	const char * all,\
	const char * aa_nn,\
	long community_list,\
	const char * community_list_str __attribute__ ((unused)),\
	const char * community_list_name,\
	const char * as_path_filter_name,\
	const char * prefix_list,\
	const char * accesslist_name,\
	const char * rmap_name,\
	long version,\
	const char * version_str __attribute__ ((unused)),\
	const char * alias_name,\
	const char * orr_group_name,\
	const char * uj,\
	const char * detail,\
	const char * wide)
funcdecl_show_ip_bgp;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp)
{
#if 15 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *viewvrfname = NULL;
	const char *all = NULL;
	const char *aa_nn = NULL;
	long community_list = 0;
	const char *community_list_str = NULL;
	const char *community_list_name = NULL;
	const char *as_path_filter_name = NULL;
	const char *prefix_list = NULL;
	const char *accesslist_name = NULL;
	const char *rmap_name = NULL;
	long version = 0;
	const char *version_str = NULL;
	const char *alias_name = NULL;
	const char *orr_group_name = NULL;
	const char *uj = NULL;
	const char *detail = NULL;
	const char *wide = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "viewvrfname")) {
			viewvrfname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "all")) {
			all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "aa_nn")) {
			aa_nn = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "community_list")) {
			community_list_str = argv[_i]->arg;
			char *_end;
			community_list = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "community_list_name")) {
			community_list_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "as_path_filter_name")) {
			as_path_filter_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix_list")) {
			prefix_list = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "accesslist_name")) {
			accesslist_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap_name")) {
			rmap_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "version")) {
			version_str = argv[_i]->arg;
			char *_end;
			version = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "alias_name")) {
			alias_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "orr_group_name")) {
			orr_group_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "wide")) {
			wide = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_bgp_magic(self, vty, argc, argv, viewvrfname, all, aa_nn, community_list, community_list_str, community_list_name, as_path_filter_name, prefix_list, accesslist_name, rmap_name, version, version_str, alias_name, orr_group_name, uj, detail, wide);
}

/* show_ip_bgp_instance_all => "show [ip] bgp <view|vrf> all [<ipv4|ipv6> [<unicast|multicast|vpn|labeled-unicast|flowspec>]] [json$uj | wide$wide]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_instance_all)
#define funcdecl_show_ip_bgp_instance_all static int show_ip_bgp_instance_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * uj,\
	const char * wide)
funcdecl_show_ip_bgp_instance_all;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_instance_all)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *uj = NULL;
	const char *wide = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "wide")) {
			wide = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_bgp_instance_all_magic(self, vty, argc, argv, uj, wide);
}

/* show_ip_bgp_instance_neighbor_bestpath_route => "show [ip] bgp [<view|vrf> VIEWVRFNAME] [<ipv4|ipv6> [<unicast|multicast|vpn|labeled-unicast|flowspec>]] neighbors <A.B.C.D|X:X::X:X|WORD> bestpath-routes [json$uj | wide$wide]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_instance_neighbor_bestpath_route)
#define funcdecl_show_ip_bgp_instance_neighbor_bestpath_route static int show_ip_bgp_instance_neighbor_bestpath_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * viewvrfname,\
	const char * neighbors,\
	const char * uj,\
	const char * wide)
funcdecl_show_ip_bgp_instance_neighbor_bestpath_route;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_instance_neighbor_bestpath_route)
{
#if 4 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *viewvrfname = NULL;
	const char *neighbors = NULL;
	const char *uj = NULL;
	const char *wide = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "viewvrfname")) {
			viewvrfname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbors")) {
			neighbors = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "wide")) {
			wide = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbors) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbors");
		return CMD_WARNING;
	}

	return show_ip_bgp_instance_neighbor_bestpath_route_magic(self, vty, argc, argv, viewvrfname, neighbors, uj, wide);
}

/* show_ip_bgp_instance_neighbor_advertised_route => "show [ip] bgp [<view|vrf> VIEWVRFNAME] [<ipv4|ipv6> [<unicast|multicast|vpn|labeled-unicast|flowspec>]] [all$all] neighbors <A.B.C.D|X:X::X:X|WORD> <advertised-routes|received-routes|filtered-routes> [route-map RMAP_NAME$route_map] [json$uj | wide$wide]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_instance_neighbor_advertised_route)
#define funcdecl_show_ip_bgp_instance_neighbor_advertised_route static int show_ip_bgp_instance_neighbor_advertised_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * viewvrfname,\
	const char * all,\
	const char * neighbors,\
	const char * route_map,\
	const char * uj,\
	const char * wide)
funcdecl_show_ip_bgp_instance_neighbor_advertised_route;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_instance_neighbor_advertised_route)
{
#if 6 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *viewvrfname = NULL;
	const char *all = NULL;
	const char *neighbors = NULL;
	const char *route_map = NULL;
	const char *uj = NULL;
	const char *wide = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "viewvrfname")) {
			viewvrfname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "all")) {
			all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbors")) {
			neighbors = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "route_map")) {
			route_map = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "wide")) {
			wide = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbors) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbors");
		return CMD_WARNING;
	}

	return show_ip_bgp_instance_neighbor_advertised_route_magic(self, vty, argc, argv, viewvrfname, all, neighbors, route_map, uj, wide);
}

