/* router_rip => "router rip [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(router_rip)
#define funcdecl_router_rip static int router_rip_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_router_rip;
DEFUN_CMD_FUNC_TEXT(router_rip)
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

	return router_rip_magic(self, vty, argc, argv, vrf);
}

/* no_router_rip => "no router rip [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(no_router_rip)
#define funcdecl_no_router_rip static int no_router_rip_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_no_router_rip;
DEFUN_CMD_FUNC_TEXT(no_router_rip)
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

	return no_router_rip_magic(self, vty, argc, argv, vrf);
}

/* rip_allow_ecmp => "[no] allow-ecmp" */
DEFUN_CMD_FUNC_DECL(rip_allow_ecmp)
#define funcdecl_rip_allow_ecmp static int rip_allow_ecmp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_rip_allow_ecmp;
DEFUN_CMD_FUNC_TEXT(rip_allow_ecmp)
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

	return rip_allow_ecmp_magic(self, vty, argc, argv, no);
}

/* rip_default_information_originate => "[no] default-information originate" */
DEFUN_CMD_FUNC_DECL(rip_default_information_originate)
#define funcdecl_rip_default_information_originate static int rip_default_information_originate_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_rip_default_information_originate;
DEFUN_CMD_FUNC_TEXT(rip_default_information_originate)
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

	return rip_default_information_originate_magic(self, vty, argc, argv, no);
}

/* rip_default_metric => "default-metric (1-16)" */
DEFUN_CMD_FUNC_DECL(rip_default_metric)
#define funcdecl_rip_default_metric static int rip_default_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long default_metric,\
	const char * default_metric_str __attribute__ ((unused)))
funcdecl_rip_default_metric;
DEFUN_CMD_FUNC_TEXT(rip_default_metric)
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

	return rip_default_metric_magic(self, vty, argc, argv, default_metric, default_metric_str);
}

/* no_rip_default_metric => "no default-metric [(1-16)]" */
DEFUN_CMD_FUNC_DECL(no_rip_default_metric)
#define funcdecl_no_rip_default_metric static int no_rip_default_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long default_metric,\
	const char * default_metric_str __attribute__ ((unused)))
funcdecl_no_rip_default_metric;
DEFUN_CMD_FUNC_TEXT(no_rip_default_metric)
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

	return no_rip_default_metric_magic(self, vty, argc, argv, default_metric, default_metric_str);
}

/* rip_distance => "distance (1-255)" */
DEFUN_CMD_FUNC_DECL(rip_distance)
#define funcdecl_rip_distance static int rip_distance_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)))
funcdecl_rip_distance;
DEFUN_CMD_FUNC_TEXT(rip_distance)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long distance = 0;
	const char *distance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
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
	if (!distance_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "distance_str");
		return CMD_WARNING;
	}

	return rip_distance_magic(self, vty, argc, argv, distance, distance_str);
}

/* no_rip_distance => "no distance [(1-255)]" */
DEFUN_CMD_FUNC_DECL(no_rip_distance)
#define funcdecl_no_rip_distance static int no_rip_distance_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)))
funcdecl_no_rip_distance;
DEFUN_CMD_FUNC_TEXT(no_rip_distance)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long distance = 0;
	const char *distance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
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

	return no_rip_distance_magic(self, vty, argc, argv, distance, distance_str);
}

/* rip_distance_source => "[no] distance (1-255) A.B.C.D/M$prefix [WORD$acl]" */
DEFUN_CMD_FUNC_DECL(rip_distance_source)
#define funcdecl_rip_distance_source static int rip_distance_source_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * acl)
funcdecl_rip_distance_source;
DEFUN_CMD_FUNC_TEXT(rip_distance_source)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;
	const char *acl = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "acl")) {
			acl = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!distance_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "distance_str");
		return CMD_WARNING;
	}
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return rip_distance_source_magic(self, vty, argc, argv, no, distance, distance_str, &prefix, prefix_str, acl);
}

/* rip_neighbor => "[no] neighbor A.B.C.D" */
DEFUN_CMD_FUNC_DECL(rip_neighbor)
#define funcdecl_rip_neighbor static int rip_neighbor_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr neighbor,\
	const char * neighbor_str __attribute__ ((unused)))
funcdecl_rip_neighbor;
DEFUN_CMD_FUNC_TEXT(rip_neighbor)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr neighbor = { INADDR_ANY };
	const char *neighbor_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &neighbor);
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
	if (!neighbor_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor_str");
		return CMD_WARNING;
	}

	return rip_neighbor_magic(self, vty, argc, argv, no, neighbor, neighbor_str);
}

/* rip_network_prefix => "[no] network A.B.C.D/M" */
DEFUN_CMD_FUNC_DECL(rip_network_prefix)
#define funcdecl_rip_network_prefix static int rip_network_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv4 * network,\
	const char * network_str __attribute__ ((unused)))
funcdecl_rip_network_prefix;
DEFUN_CMD_FUNC_TEXT(rip_network_prefix)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv4 network = { };
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
			_fail = !str2prefix_ipv4(argv[_i]->arg, &network);
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

	return rip_network_prefix_magic(self, vty, argc, argv, no, &network, network_str);
}

/* rip_network_if => "[no] network WORD" */
DEFUN_CMD_FUNC_DECL(rip_network_if)
#define funcdecl_rip_network_if static int rip_network_if_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * network)
funcdecl_rip_network_if;
DEFUN_CMD_FUNC_TEXT(rip_network_if)
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

	return rip_network_if_magic(self, vty, argc, argv, no, network);
}

/* rip_offset_list => "[no] offset-list ACCESSLIST4_NAME$acl <in|out>$direction (0-16)$metric [IFNAME]" */
DEFUN_CMD_FUNC_DECL(rip_offset_list)
#define funcdecl_rip_offset_list static int rip_offset_list_magic(\
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
funcdecl_rip_offset_list;
DEFUN_CMD_FUNC_TEXT(rip_offset_list)
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

	return rip_offset_list_magic(self, vty, argc, argv, no, acl, direction, metric, metric_str, ifname);
}

/* rip_passive_default => "[no] passive-interface default" */
DEFUN_CMD_FUNC_DECL(rip_passive_default)
#define funcdecl_rip_passive_default static int rip_passive_default_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_rip_passive_default;
DEFUN_CMD_FUNC_TEXT(rip_passive_default)
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

	return rip_passive_default_magic(self, vty, argc, argv, no);
}

/* rip_passive_interface => "[no] passive-interface IFNAME" */
DEFUN_CMD_FUNC_DECL(rip_passive_interface)
#define funcdecl_rip_passive_interface static int rip_passive_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * ifname)
funcdecl_rip_passive_interface;
DEFUN_CMD_FUNC_TEXT(rip_passive_interface)
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

	return rip_passive_interface_magic(self, vty, argc, argv, no, ifname);
}

/* rip_redistribute => "[no] redistribute <kernel|connected|static|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>$protocol [{metric (0-16)|route-map RMAP_NAME$route_map}]" */
DEFUN_CMD_FUNC_DECL(rip_redistribute)
#define funcdecl_rip_redistribute static int rip_redistribute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * protocol,\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	const char * route_map)
funcdecl_rip_redistribute;
DEFUN_CMD_FUNC_TEXT(rip_redistribute)
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

	return rip_redistribute_magic(self, vty, argc, argv, no, protocol, metric, metric_str, route_map);
}

/* rip_route => "[no] route A.B.C.D/M" */
DEFUN_CMD_FUNC_DECL(rip_route)
#define funcdecl_rip_route static int rip_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv4 * route,\
	const char * route_str __attribute__ ((unused)))
funcdecl_rip_route;
DEFUN_CMD_FUNC_TEXT(rip_route)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv4 route = { };
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
			_fail = !str2prefix_ipv4(argv[_i]->arg, &route);
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

	return rip_route_magic(self, vty, argc, argv, no, &route, route_str);
}

/* rip_timers => "timers basic (5-2147483647)$update (5-2147483647)$timeout (5-2147483647)$garbage" */
DEFUN_CMD_FUNC_DECL(rip_timers)
#define funcdecl_rip_timers static int rip_timers_magic(\
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
funcdecl_rip_timers;
DEFUN_CMD_FUNC_TEXT(rip_timers)
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

	return rip_timers_magic(self, vty, argc, argv, update, update_str, timeout, timeout_str, garbage, garbage_str);
}

/* no_rip_timers => "no timers basic [(5-2147483647) (5-2147483647) (5-2147483647)]" */
DEFUN_CMD_FUNC_DECL(no_rip_timers)
#define funcdecl_no_rip_timers static int no_rip_timers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long basic,\
	const char * basic_str __attribute__ ((unused)))
funcdecl_no_rip_timers;
DEFUN_CMD_FUNC_TEXT(no_rip_timers)
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

	return no_rip_timers_magic(self, vty, argc, argv, basic, basic_str);
}

/* rip_version => "version (1-2)" */
DEFUN_CMD_FUNC_DECL(rip_version)
#define funcdecl_rip_version static int rip_version_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long version,\
	const char * version_str __attribute__ ((unused)))
funcdecl_rip_version;
DEFUN_CMD_FUNC_TEXT(rip_version)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long version = 0;
	const char *version_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "version")) {
			version_str = argv[_i]->arg;
			char *_end;
			version = strtol(argv[_i]->arg, &_end, 10);
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
	if (!version_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "version_str");
		return CMD_WARNING;
	}

	return rip_version_magic(self, vty, argc, argv, version, version_str);
}

/* no_rip_version => "no version [(1-2)]" */
DEFUN_CMD_FUNC_DECL(no_rip_version)
#define funcdecl_no_rip_version static int no_rip_version_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long version,\
	const char * version_str __attribute__ ((unused)))
funcdecl_no_rip_version;
DEFUN_CMD_FUNC_TEXT(no_rip_version)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long version = 0;
	const char *version_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "version")) {
			version_str = argv[_i]->arg;
			char *_end;
			version = strtol(argv[_i]->arg, &_end, 10);
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

	return no_rip_version_magic(self, vty, argc, argv, version, version_str);
}

/* ip_rip_split_horizon => "[no] ip rip split-horizon [poisoned-reverse$poisoned_reverse]" */
DEFUN_CMD_FUNC_DECL(ip_rip_split_horizon)
#define funcdecl_ip_rip_split_horizon static int ip_rip_split_horizon_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * poisoned_reverse)
funcdecl_ip_rip_split_horizon;
DEFUN_CMD_FUNC_TEXT(ip_rip_split_horizon)
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

	return ip_rip_split_horizon_magic(self, vty, argc, argv, no, poisoned_reverse);
}

/* ip_rip_v2_broadcast => "[no] ip rip v2-broadcast" */
DEFUN_CMD_FUNC_DECL(ip_rip_v2_broadcast)
#define funcdecl_ip_rip_v2_broadcast static int ip_rip_v2_broadcast_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ip_rip_v2_broadcast;
DEFUN_CMD_FUNC_TEXT(ip_rip_v2_broadcast)
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

	return ip_rip_v2_broadcast_magic(self, vty, argc, argv, no);
}

/* ip_rip_receive_version => "ip rip receive version <{1$v1|2$v2}|none>" */
DEFUN_CMD_FUNC_DECL(ip_rip_receive_version)
#define funcdecl_ip_rip_receive_version static int ip_rip_receive_version_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * v1,\
	const char * v2)
funcdecl_ip_rip_receive_version;
DEFUN_CMD_FUNC_TEXT(ip_rip_receive_version)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *v1 = NULL;
	const char *v2 = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "v1")) {
			v1 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "v2")) {
			v2 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return ip_rip_receive_version_magic(self, vty, argc, argv, v1, v2);
}

/* no_ip_rip_receive_version => "no ip rip receive version [<{1|2}|none>]" */
DEFUN_CMD_FUNC_DECL(no_ip_rip_receive_version)
#define funcdecl_no_ip_rip_receive_version static int no_ip_rip_receive_version_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ip_rip_receive_version;
DEFUN_CMD_FUNC_TEXT(no_ip_rip_receive_version)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

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

	return no_ip_rip_receive_version_magic(self, vty, argc, argv);
}

/* ip_rip_send_version => "ip rip send version <{1$v1|2$v2}|none>" */
DEFUN_CMD_FUNC_DECL(ip_rip_send_version)
#define funcdecl_ip_rip_send_version static int ip_rip_send_version_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * v1,\
	const char * v2)
funcdecl_ip_rip_send_version;
DEFUN_CMD_FUNC_TEXT(ip_rip_send_version)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *v1 = NULL;
	const char *v2 = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "v1")) {
			v1 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "v2")) {
			v2 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return ip_rip_send_version_magic(self, vty, argc, argv, v1, v2);
}

/* no_ip_rip_send_version => "no ip rip send version [<{1|2}|none>]" */
DEFUN_CMD_FUNC_DECL(no_ip_rip_send_version)
#define funcdecl_no_ip_rip_send_version static int no_ip_rip_send_version_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ip_rip_send_version;
DEFUN_CMD_FUNC_TEXT(no_ip_rip_send_version)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

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

	return no_ip_rip_send_version_magic(self, vty, argc, argv);
}

/* ip_rip_authentication_mode => "ip rip authentication mode <md5$mode [auth-length <rfc|old-ripd>$auth_length]|text$mode>" */
DEFUN_CMD_FUNC_DECL(ip_rip_authentication_mode)
#define funcdecl_ip_rip_authentication_mode static int ip_rip_authentication_mode_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * mode,\
	const char * auth_length)
funcdecl_ip_rip_authentication_mode;
DEFUN_CMD_FUNC_TEXT(ip_rip_authentication_mode)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *mode = NULL;
	const char *auth_length = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "mode")) {
			mode = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "auth_length")) {
			auth_length = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!mode) {
		vty_out(vty, "Internal CLI error [%s]\n", "mode");
		return CMD_WARNING;
	}

	return ip_rip_authentication_mode_magic(self, vty, argc, argv, mode, auth_length);
}

/* no_ip_rip_authentication_mode => "no ip rip authentication mode [<md5 [auth-length <rfc|old-ripd>]|text>]" */
DEFUN_CMD_FUNC_DECL(no_ip_rip_authentication_mode)
#define funcdecl_no_ip_rip_authentication_mode static int no_ip_rip_authentication_mode_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ip_rip_authentication_mode;
DEFUN_CMD_FUNC_TEXT(no_ip_rip_authentication_mode)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

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

	return no_ip_rip_authentication_mode_magic(self, vty, argc, argv);
}

/* ip_rip_authentication_string => "ip rip authentication string LINE$password" */
DEFUN_CMD_FUNC_DECL(ip_rip_authentication_string)
#define funcdecl_ip_rip_authentication_string static int ip_rip_authentication_string_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * password)
funcdecl_ip_rip_authentication_string;
DEFUN_CMD_FUNC_TEXT(ip_rip_authentication_string)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *password = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "password")) {
			password = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!password) {
		vty_out(vty, "Internal CLI error [%s]\n", "password");
		return CMD_WARNING;
	}

	return ip_rip_authentication_string_magic(self, vty, argc, argv, password);
}

/* no_ip_rip_authentication_string => "no ip rip authentication string [LINE]" */
DEFUN_CMD_FUNC_DECL(no_ip_rip_authentication_string)
#define funcdecl_no_ip_rip_authentication_string static int no_ip_rip_authentication_string_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * line)
funcdecl_no_ip_rip_authentication_string;
DEFUN_CMD_FUNC_TEXT(no_ip_rip_authentication_string)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *line = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "line")) {
			line = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_ip_rip_authentication_string_magic(self, vty, argc, argv, line);
}

/* ip_rip_authentication_key_chain => "ip rip authentication key-chain LINE$keychain" */
DEFUN_CMD_FUNC_DECL(ip_rip_authentication_key_chain)
#define funcdecl_ip_rip_authentication_key_chain static int ip_rip_authentication_key_chain_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * keychain)
funcdecl_ip_rip_authentication_key_chain;
DEFUN_CMD_FUNC_TEXT(ip_rip_authentication_key_chain)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *keychain = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "keychain")) {
			keychain = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!keychain) {
		vty_out(vty, "Internal CLI error [%s]\n", "keychain");
		return CMD_WARNING;
	}

	return ip_rip_authentication_key_chain_magic(self, vty, argc, argv, keychain);
}

/* no_ip_rip_authentication_key_chain => "no ip rip authentication key-chain [LINE]" */
DEFUN_CMD_FUNC_DECL(no_ip_rip_authentication_key_chain)
#define funcdecl_no_ip_rip_authentication_key_chain static int no_ip_rip_authentication_key_chain_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * line)
funcdecl_no_ip_rip_authentication_key_chain;
DEFUN_CMD_FUNC_TEXT(no_ip_rip_authentication_key_chain)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *line = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "line")) {
			line = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_ip_rip_authentication_key_chain_magic(self, vty, argc, argv, line);
}

/* clear_ip_rip => "clear ip rip [vrf WORD]" */
DEFUN_CMD_FUNC_DECL(clear_ip_rip)
#define funcdecl_clear_ip_rip static int clear_ip_rip_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_clear_ip_rip;
DEFUN_CMD_FUNC_TEXT(clear_ip_rip)
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

	return clear_ip_rip_magic(self, vty, argc, argv, vrf);
}

