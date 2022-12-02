/* router_ripng => "router ripng [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(router_ripng)
#define funcdecl_router_ripng static int router_ripng_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_router_ripng;
DEFUN_CMD_FUNC_TEXT(router_ripng)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return router_ripng_magic(self, vty, argc, argv, vrf);
}

/* no_router_ripng => "no router ripng [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(no_router_ripng)
#define funcdecl_no_router_ripng static int no_router_ripng_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_no_router_ripng;
DEFUN_CMD_FUNC_TEXT(no_router_ripng)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_router_ripng_magic(self, vty, argc, argv, vrf);
}

/* ripng_allow_ecmp => "[no] allow-ecmp" */
DEFUN_CMD_FUNC_DECL(ripng_allow_ecmp)
#define funcdecl_ripng_allow_ecmp static int ripng_allow_ecmp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ripng_allow_ecmp;
DEFUN_CMD_FUNC_TEXT(ripng_allow_ecmp)
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

	return ripng_allow_ecmp_magic(self, vty, argc, argv, no);
}

/* ripng_default_information_originate => "[no] default-information originate" */
DEFUN_CMD_FUNC_DECL(ripng_default_information_originate)
#define funcdecl_ripng_default_information_originate static int ripng_default_information_originate_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ripng_default_information_originate;
DEFUN_CMD_FUNC_TEXT(ripng_default_information_originate)
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

	return ripng_default_information_originate_magic(self, vty, argc, argv, no);
}

/* ripng_default_metric => "default-metric (1-16)" */
DEFUN_CMD_FUNC_DECL(ripng_default_metric)
#define funcdecl_ripng_default_metric static int ripng_default_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long default_metric,\
	const char * default_metric_str __attribute__ ((unused)))
funcdecl_ripng_default_metric;
DEFUN_CMD_FUNC_TEXT(ripng_default_metric)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long default_metric = 0;
	const char *default_metric_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "default_metric")) {
			default_metric_str = argv[_i]->arg;
			char *_end;
			default_metric = strtol(argv[_i]->arg, &_end, 10);
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
	if (!default_metric_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "default_metric_str");
		return CMD_WARNING;
	}

	return ripng_default_metric_magic(self, vty, argc, argv, default_metric, default_metric_str);
}

/* no_ripng_default_metric => "no default-metric [(1-16)]" */
DEFUN_CMD_FUNC_DECL(no_ripng_default_metric)
#define funcdecl_no_ripng_default_metric static int no_ripng_default_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long default_metric,\
	const char * default_metric_str __attribute__ ((unused)))
funcdecl_no_ripng_default_metric;
DEFUN_CMD_FUNC_TEXT(no_ripng_default_metric)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long default_metric = 0;
	const char *default_metric_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "default_metric")) {
			default_metric_str = argv[_i]->arg;
			char *_end;
			default_metric = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ripng_default_metric_magic(self, vty, argc, argv, default_metric, default_metric_str);
}

/* ripng_network_prefix => "[no] network X:X::X:X/M" */
DEFUN_CMD_FUNC_DECL(ripng_network_prefix)
#define funcdecl_ripng_network_prefix static int ripng_network_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * network,\
	const char * network_str __attribute__ ((unused)))
funcdecl_ripng_network_prefix;
DEFUN_CMD_FUNC_TEXT(ripng_network_prefix)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 network = { };
	const char *network_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "network")) {
			network_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &network);
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
	if (!network_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "network_str");
		return CMD_WARNING;
	}

	return ripng_network_prefix_magic(self, vty, argc, argv, no, &network, network_str);
}

/* ripng_network_if => "[no] network WORD" */
DEFUN_CMD_FUNC_DECL(ripng_network_if)
#define funcdecl_ripng_network_if static int ripng_network_if_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * network)
funcdecl_ripng_network_if;
DEFUN_CMD_FUNC_TEXT(ripng_network_if)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *network = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "network")) {
			network = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!network) {
		vty_out(vty, "Internal CLI error [%s]\n", "network");
		return CMD_WARNING;
	}

	return ripng_network_if_magic(self, vty, argc, argv, no, network);
}

/* ripng_offset_list => "[no] offset-list ACCESSLIST6_NAME$acl <in|out>$direction (0-16)$metric [IFNAME]" */
DEFUN_CMD_FUNC_DECL(ripng_offset_list)
#define funcdecl_ripng_offset_list static int ripng_offset_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * acl,\
	const char * direction,\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	const char * ifname)
funcdecl_ripng_offset_list;
DEFUN_CMD_FUNC_TEXT(ripng_offset_list)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *acl = NULL;
	const char *direction = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "acl")) {
			acl = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "direction")) {
			direction = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!acl) {
		vty_out(vty, "Internal CLI error [%s]\n", "acl");
		return CMD_WARNING;
	}
	if (!direction) {
		vty_out(vty, "Internal CLI error [%s]\n", "direction");
		return CMD_WARNING;
	}
	if (!metric_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "metric_str");
		return CMD_WARNING;
	}

	return ripng_offset_list_magic(self, vty, argc, argv, no, acl, direction, metric, metric_str, ifname);
}

/* ripng_passive_interface => "[no] passive-interface IFNAME" */
DEFUN_CMD_FUNC_DECL(ripng_passive_interface)
#define funcdecl_ripng_passive_interface static int ripng_passive_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * ifname)
funcdecl_ripng_passive_interface;
DEFUN_CMD_FUNC_TEXT(ripng_passive_interface)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return ripng_passive_interface_magic(self, vty, argc, argv, no, ifname);
}

/* ripng_redistribute => "[no] redistribute <kernel|connected|static|ospf6|isis|bgp|nhrp|table|vnc|babel|sharp|openfabric>$protocol [{metric (0-16)|route-map RMAP_NAME$route_map}]" */
DEFUN_CMD_FUNC_DECL(ripng_redistribute)
#define funcdecl_ripng_redistribute static int ripng_redistribute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * protocol,\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	const char * route_map)
funcdecl_ripng_redistribute;
DEFUN_CMD_FUNC_TEXT(ripng_redistribute)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *protocol = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	const char *route_map = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "protocol")) {
			protocol = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "route_map")) {
			route_map = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!protocol) {
		vty_out(vty, "Internal CLI error [%s]\n", "protocol");
		return CMD_WARNING;
	}

	return ripng_redistribute_magic(self, vty, argc, argv, no, protocol, metric, metric_str, route_map);
}

/* ripng_route => "[no] route X:X::X:X/M" */
DEFUN_CMD_FUNC_DECL(ripng_route)
#define funcdecl_ripng_route static int ripng_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * route,\
	const char * route_str __attribute__ ((unused)))
funcdecl_ripng_route;
DEFUN_CMD_FUNC_TEXT(ripng_route)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 route = { };
	const char *route_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "route")) {
			route_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &route);
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
	if (!route_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "route_str");
		return CMD_WARNING;
	}

	return ripng_route_magic(self, vty, argc, argv, no, &route, route_str);
}

/* ripng_aggregate_address => "[no] aggregate-address X:X::X:X/M" */
DEFUN_CMD_FUNC_DECL(ripng_aggregate_address)
#define funcdecl_ripng_aggregate_address static int ripng_aggregate_address_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * aggregate_address,\
	const char * aggregate_address_str __attribute__ ((unused)))
funcdecl_ripng_aggregate_address;
DEFUN_CMD_FUNC_TEXT(ripng_aggregate_address)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 aggregate_address = { };
	const char *aggregate_address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "aggregate_address")) {
			aggregate_address_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &aggregate_address);
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
	if (!aggregate_address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "aggregate_address_str");
		return CMD_WARNING;
	}

	return ripng_aggregate_address_magic(self, vty, argc, argv, no, &aggregate_address, aggregate_address_str);
}

/* ripng_timers => "timers basic (1-65535)$update (1-65535)$timeout (1-65535)$garbage" */
DEFUN_CMD_FUNC_DECL(ripng_timers)
#define funcdecl_ripng_timers static int ripng_timers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long update,\
	const char * update_str __attribute__ ((unused)),\
	long timeout,\
	const char * timeout_str __attribute__ ((unused)),\
	long garbage,\
	const char * garbage_str __attribute__ ((unused)))
funcdecl_ripng_timers;
DEFUN_CMD_FUNC_TEXT(ripng_timers)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long update = 0;
	const char *update_str = NULL;
	long timeout = 0;
	const char *timeout_str = NULL;
	long garbage = 0;
	const char *garbage_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "update")) {
			update_str = argv[_i]->arg;
			char *_end;
			update = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "timeout")) {
			timeout_str = argv[_i]->arg;
			char *_end;
			timeout = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "garbage")) {
			garbage_str = argv[_i]->arg;
			char *_end;
			garbage = strtol(argv[_i]->arg, &_end, 10);
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
	if (!update_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "update_str");
		return CMD_WARNING;
	}
	if (!timeout_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "timeout_str");
		return CMD_WARNING;
	}
	if (!garbage_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "garbage_str");
		return CMD_WARNING;
	}

	return ripng_timers_magic(self, vty, argc, argv, update, update_str, timeout, timeout_str, garbage, garbage_str);
}

/* no_ripng_timers => "no timers basic [(1-65535) (1-65535) (1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_ripng_timers)
#define funcdecl_no_ripng_timers static int no_ripng_timers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long basic,\
	const char * basic_str __attribute__ ((unused)))
funcdecl_no_ripng_timers;
DEFUN_CMD_FUNC_TEXT(no_ripng_timers)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long basic = 0;
	const char *basic_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "basic")) {
			basic_str = argv[_i]->arg;
			char *_end;
			basic = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ripng_timers_magic(self, vty, argc, argv, basic, basic_str);
}

/* ipv6_ripng_split_horizon => "[no] ipv6 ripng split-horizon [poisoned-reverse$poisoned_reverse]" */
DEFUN_CMD_FUNC_DECL(ipv6_ripng_split_horizon)
#define funcdecl_ipv6_ripng_split_horizon static int ipv6_ripng_split_horizon_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * poisoned_reverse)
funcdecl_ipv6_ripng_split_horizon;
DEFUN_CMD_FUNC_TEXT(ipv6_ripng_split_horizon)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *poisoned_reverse = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "poisoned_reverse")) {
			poisoned_reverse = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return ipv6_ripng_split_horizon_magic(self, vty, argc, argv, no, poisoned_reverse);
}

/* clear_ipv6_rip => "clear ipv6 ripng [vrf WORD]" */
DEFUN_CMD_FUNC_DECL(clear_ipv6_rip)
#define funcdecl_clear_ipv6_rip static int clear_ipv6_rip_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_clear_ipv6_rip;
DEFUN_CMD_FUNC_TEXT(clear_ipv6_rip)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ipv6_rip_magic(self, vty, argc, argv, vrf);
}

