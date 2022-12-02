/* show_srte_policy => "show sr-te policy" */
DEFUN_CMD_FUNC_DECL(show_srte_policy)
#define funcdecl_show_srte_policy static int show_srte_policy_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_srte_policy;
DEFUN_CMD_FUNC_TEXT(show_srte_policy)
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

	return show_srte_policy_magic(self, vty, argc, argv);
}

/* show_srte_policy_detail => "show sr-te policy detail" */
DEFUN_CMD_FUNC_DECL(show_srte_policy_detail)
#define funcdecl_show_srte_policy_detail static int show_srte_policy_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_srte_policy_detail;
DEFUN_CMD_FUNC_TEXT(show_srte_policy_detail)
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

	return show_srte_policy_detail_magic(self, vty, argc, argv);
}

/* segment_routing_list => "segment-routing" */
DEFUN_CMD_FUNC_DECL(segment_routing_list)
#define funcdecl_segment_routing_list static int segment_routing_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_segment_routing_list;
DEFUN_CMD_FUNC_TEXT(segment_routing_list)
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

	return segment_routing_list_magic(self, vty, argc, argv);
}

/* sr_traffic_eng_list => "traffic-eng" */
DEFUN_CMD_FUNC_DECL(sr_traffic_eng_list)
#define funcdecl_sr_traffic_eng_list static int sr_traffic_eng_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_sr_traffic_eng_list;
DEFUN_CMD_FUNC_TEXT(sr_traffic_eng_list)
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

	return sr_traffic_eng_list_magic(self, vty, argc, argv);
}

/* srte_segment_list => "segment-list WORD$name" */
DEFUN_CMD_FUNC_DECL(srte_segment_list)
#define funcdecl_srte_segment_list static int srte_segment_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_srte_segment_list;
DEFUN_CMD_FUNC_TEXT(srte_segment_list)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}

	return srte_segment_list_magic(self, vty, argc, argv, name);
}

/* srte_no_segment_list => "no segment-list WORD$name" */
DEFUN_CMD_FUNC_DECL(srte_no_segment_list)
#define funcdecl_srte_no_segment_list static int srte_no_segment_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_srte_no_segment_list;
DEFUN_CMD_FUNC_TEXT(srte_no_segment_list)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}

	return srte_no_segment_list_magic(self, vty, argc, argv, name);
}

/* srte_segment_list_segment => "index (0-4294967295)$index <[mpls$has_mpls_label label (16-1048575)$label] |[nai$has_nai <prefix <A.B.C.D/M$prefix_ipv4|X:X::X:X/M$prefix_ipv6><algorithm$has_algo (0-1)$algo| iface$has_iface_id (0-4294967295)$iface_id>| adjacency$has_adj <A.B.C.D$adj_src_ipv4 A.B.C.D$adj_dst_ipv4|X:X::X:X$adj_src_ipv6 X:X::X:X$adj_dst_ipv6>>]>" */
DEFUN_CMD_FUNC_DECL(srte_segment_list_segment)
#define funcdecl_srte_segment_list_segment static int srte_segment_list_segment_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long index,\
	const char * index_str __attribute__ ((unused)),\
	const char * has_mpls_label,\
	long label,\
	const char * label_str __attribute__ ((unused)),\
	const char * has_nai,\
	const struct prefix_ipv4 * prefix_ipv4,\
	const char * prefix_ipv4_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * prefix_ipv6,\
	const char * prefix_ipv6_str __attribute__ ((unused)),\
	const char * has_algo,\
	long algo,\
	const char * algo_str __attribute__ ((unused)),\
	const char * has_iface_id,\
	long iface_id,\
	const char * iface_id_str __attribute__ ((unused)),\
	const char * has_adj,\
	struct in_addr adj_src_ipv4,\
	const char * adj_src_ipv4_str __attribute__ ((unused)),\
	struct in_addr adj_dst_ipv4,\
	const char * adj_dst_ipv4_str __attribute__ ((unused)),\
	struct in6_addr adj_src_ipv6,\
	const char * adj_src_ipv6_str __attribute__ ((unused)),\
	struct in6_addr adj_dst_ipv6,\
	const char * adj_dst_ipv6_str __attribute__ ((unused)))
funcdecl_srte_segment_list_segment;
DEFUN_CMD_FUNC_TEXT(srte_segment_list_segment)
{
#if 15 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long index = 0;
	const char *index_str = NULL;
	const char *has_mpls_label = NULL;
	long label = 0;
	const char *label_str = NULL;
	const char *has_nai = NULL;
	struct prefix_ipv4 prefix_ipv4 = { };
	const char *prefix_ipv4_str = NULL;
	struct prefix_ipv6 prefix_ipv6 = { };
	const char *prefix_ipv6_str = NULL;
	const char *has_algo = NULL;
	long algo = 0;
	const char *algo_str = NULL;
	const char *has_iface_id = NULL;
	long iface_id = 0;
	const char *iface_id_str = NULL;
	const char *has_adj = NULL;
	struct in_addr adj_src_ipv4 = { INADDR_ANY };
	const char *adj_src_ipv4_str = NULL;
	struct in_addr adj_dst_ipv4 = { INADDR_ANY };
	const char *adj_dst_ipv4_str = NULL;
	struct in6_addr adj_src_ipv6 = {};
	const char *adj_src_ipv6_str = NULL;
	struct in6_addr adj_dst_ipv6 = {};
	const char *adj_dst_ipv6_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "index")) {
			index_str = argv[_i]->arg;
			char *_end;
			index = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "has_mpls_label")) {
			has_mpls_label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label_str = argv[_i]->arg;
			char *_end;
			label = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "has_nai")) {
			has_nai = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix_ipv4")) {
			prefix_ipv4_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix_ipv4);
		}
		if (!strcmp(argv[_i]->varname, "prefix_ipv6")) {
			prefix_ipv6_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix_ipv6);
		}
		if (!strcmp(argv[_i]->varname, "has_algo")) {
			has_algo = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "algo")) {
			algo_str = argv[_i]->arg;
			char *_end;
			algo = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "has_iface_id")) {
			has_iface_id = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "iface_id")) {
			iface_id_str = argv[_i]->arg;
			char *_end;
			iface_id = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "has_adj")) {
			has_adj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "adj_src_ipv4")) {
			adj_src_ipv4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &adj_src_ipv4);
		}
		if (!strcmp(argv[_i]->varname, "adj_dst_ipv4")) {
			adj_dst_ipv4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &adj_dst_ipv4);
		}
		if (!strcmp(argv[_i]->varname, "adj_src_ipv6")) {
			adj_src_ipv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &adj_src_ipv6);
		}
		if (!strcmp(argv[_i]->varname, "adj_dst_ipv6")) {
			adj_dst_ipv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &adj_dst_ipv6);
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
	if (!index_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "index_str");
		return CMD_WARNING;
	}

	return srte_segment_list_segment_magic(self, vty, argc, argv, index, index_str, has_mpls_label, label, label_str, has_nai, &prefix_ipv4, prefix_ipv4_str, &prefix_ipv6, prefix_ipv6_str, has_algo, algo, algo_str, has_iface_id, iface_id, iface_id_str, has_adj, adj_src_ipv4, adj_src_ipv4_str, adj_dst_ipv4, adj_dst_ipv4_str, adj_src_ipv6, adj_src_ipv6_str, adj_dst_ipv6, adj_dst_ipv6_str);
}

/* srte_segment_list_no_segment => "no index (0-4294967295)$index" */
DEFUN_CMD_FUNC_DECL(srte_segment_list_no_segment)
#define funcdecl_srte_segment_list_no_segment static int srte_segment_list_no_segment_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long index,\
	const char * index_str __attribute__ ((unused)))
funcdecl_srte_segment_list_no_segment;
DEFUN_CMD_FUNC_TEXT(srte_segment_list_no_segment)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long index = 0;
	const char *index_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "index")) {
			index_str = argv[_i]->arg;
			char *_end;
			index = strtol(argv[_i]->arg, &_end, 10);
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
	if (!index_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "index_str");
		return CMD_WARNING;
	}

	return srte_segment_list_no_segment_magic(self, vty, argc, argv, index, index_str);
}

/* srte_policy => "policy color (0-4294967295)$num endpoint <A.B.C.D|X:X::X:X>$endpoint" */
DEFUN_CMD_FUNC_DECL(srte_policy)
#define funcdecl_srte_policy static int srte_policy_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long num,\
	const char * num_str __attribute__ ((unused)),\
	const union sockunion * endpoint,\
	const char * endpoint_str __attribute__ ((unused)))
funcdecl_srte_policy;
DEFUN_CMD_FUNC_TEXT(srte_policy)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long num = 0;
	const char *num_str = NULL;
	union sockunion s__endpoint = { .sa.sa_family = AF_UNSPEC }, *endpoint = NULL;
	const char *endpoint_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "num")) {
			num_str = argv[_i]->arg;
			char *_end;
			num = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "endpoint")) {
			endpoint_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__endpoint.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__endpoint.sin6.sin6_addr);
				endpoint = &s__endpoint;
			} else {
				s__endpoint.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__endpoint.sin.sin_addr);
				endpoint = &s__endpoint;
			}
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
	if (!num_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "num_str");
		return CMD_WARNING;
	}
	if (!endpoint) {
		vty_out(vty, "Internal CLI error [%s]\n", "endpoint");
		return CMD_WARNING;
	}
	if (!endpoint_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "endpoint_str");
		return CMD_WARNING;
	}

	return srte_policy_magic(self, vty, argc, argv, num, num_str, endpoint, endpoint_str);
}

/* srte_no_policy => "no policy color (0-4294967295)$num endpoint <A.B.C.D|X:X::X:X>$endpoint" */
DEFUN_CMD_FUNC_DECL(srte_no_policy)
#define funcdecl_srte_no_policy static int srte_no_policy_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long num,\
	const char * num_str __attribute__ ((unused)),\
	const union sockunion * endpoint,\
	const char * endpoint_str __attribute__ ((unused)))
funcdecl_srte_no_policy;
DEFUN_CMD_FUNC_TEXT(srte_no_policy)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long num = 0;
	const char *num_str = NULL;
	union sockunion s__endpoint = { .sa.sa_family = AF_UNSPEC }, *endpoint = NULL;
	const char *endpoint_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "num")) {
			num_str = argv[_i]->arg;
			char *_end;
			num = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "endpoint")) {
			endpoint_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__endpoint.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__endpoint.sin6.sin6_addr);
				endpoint = &s__endpoint;
			} else {
				s__endpoint.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__endpoint.sin.sin_addr);
				endpoint = &s__endpoint;
			}
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
	if (!num_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "num_str");
		return CMD_WARNING;
	}
	if (!endpoint) {
		vty_out(vty, "Internal CLI error [%s]\n", "endpoint");
		return CMD_WARNING;
	}
	if (!endpoint_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "endpoint_str");
		return CMD_WARNING;
	}

	return srte_no_policy_magic(self, vty, argc, argv, num, num_str, endpoint, endpoint_str);
}

/* srte_policy_name => "name WORD$name" */
DEFUN_CMD_FUNC_DECL(srte_policy_name)
#define funcdecl_srte_policy_name static int srte_policy_name_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_srte_policy_name;
DEFUN_CMD_FUNC_TEXT(srte_policy_name)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}

	return srte_policy_name_magic(self, vty, argc, argv, name);
}

/* srte_policy_no_name => "no name [WORD]" */
DEFUN_CMD_FUNC_DECL(srte_policy_no_name)
#define funcdecl_srte_policy_no_name static int srte_policy_no_name_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_srte_policy_no_name;
DEFUN_CMD_FUNC_TEXT(srte_policy_no_name)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return srte_policy_no_name_magic(self, vty, argc, argv, name);
}

/* srte_policy_binding_sid => "binding-sid (16-1048575)$label" */
DEFUN_CMD_FUNC_DECL(srte_policy_binding_sid)
#define funcdecl_srte_policy_binding_sid static int srte_policy_binding_sid_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long label,\
	const char * label_str __attribute__ ((unused)))
funcdecl_srte_policy_binding_sid;
DEFUN_CMD_FUNC_TEXT(srte_policy_binding_sid)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long label = 0;
	const char *label_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "label")) {
			label_str = argv[_i]->arg;
			char *_end;
			label = strtol(argv[_i]->arg, &_end, 10);
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
	if (!label_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "label_str");
		return CMD_WARNING;
	}

	return srte_policy_binding_sid_magic(self, vty, argc, argv, label, label_str);
}

/* srte_policy_no_binding_sid => "no binding-sid [(16-1048575)]" */
DEFUN_CMD_FUNC_DECL(srte_policy_no_binding_sid)
#define funcdecl_srte_policy_no_binding_sid static int srte_policy_no_binding_sid_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long binding_sid,\
	const char * binding_sid_str __attribute__ ((unused)))
funcdecl_srte_policy_no_binding_sid;
DEFUN_CMD_FUNC_TEXT(srte_policy_no_binding_sid)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long binding_sid = 0;
	const char *binding_sid_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "binding_sid")) {
			binding_sid_str = argv[_i]->arg;
			char *_end;
			binding_sid = strtol(argv[_i]->arg, &_end, 10);
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

	return srte_policy_no_binding_sid_magic(self, vty, argc, argv, binding_sid, binding_sid_str);
}

/* srte_policy_candidate_exp => "candidate-path preference (0-4294967295)$preference name WORD$name 	 explicit segment-list WORD$list_name" */
DEFUN_CMD_FUNC_DECL(srte_policy_candidate_exp)
#define funcdecl_srte_policy_candidate_exp static int srte_policy_candidate_exp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long preference,\
	const char * preference_str __attribute__ ((unused)),\
	const char * name,\
	const char * list_name)
funcdecl_srte_policy_candidate_exp;
DEFUN_CMD_FUNC_TEXT(srte_policy_candidate_exp)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long preference = 0;
	const char *preference_str = NULL;
	const char *name = NULL;
	const char *list_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "preference")) {
			preference_str = argv[_i]->arg;
			char *_end;
			preference = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "list_name")) {
			list_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!preference_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "preference_str");
		return CMD_WARNING;
	}
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}
	if (!list_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "list_name");
		return CMD_WARNING;
	}

	return srte_policy_candidate_exp_magic(self, vty, argc, argv, preference, preference_str, name, list_name);
}

/* srte_policy_candidate_dyn => "candidate-path preference (0-4294967295)$preference name WORD$name dynamic" */
DEFUN_CMD_FUNC_DECL(srte_policy_candidate_dyn)
#define funcdecl_srte_policy_candidate_dyn static int srte_policy_candidate_dyn_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long preference,\
	const char * preference_str __attribute__ ((unused)),\
	const char * name)
funcdecl_srte_policy_candidate_dyn;
DEFUN_CMD_FUNC_TEXT(srte_policy_candidate_dyn)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long preference = 0;
	const char *preference_str = NULL;
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "preference")) {
			preference_str = argv[_i]->arg;
			char *_end;
			preference = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!preference_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "preference_str");
		return CMD_WARNING;
	}
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}

	return srte_policy_candidate_dyn_magic(self, vty, argc, argv, preference, preference_str, name);
}

/* srte_candidate_bandwidth => "bandwidth BANDWIDTH$value [required$required]" */
DEFUN_CMD_FUNC_DECL(srte_candidate_bandwidth)
#define funcdecl_srte_candidate_bandwidth static int srte_candidate_bandwidth_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * value,\
	const char * required)
funcdecl_srte_candidate_bandwidth;
DEFUN_CMD_FUNC_TEXT(srte_candidate_bandwidth)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *value = NULL;
	const char *required = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "required")) {
			required = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!value) {
		vty_out(vty, "Internal CLI error [%s]\n", "value");
		return CMD_WARNING;
	}

	return srte_candidate_bandwidth_magic(self, vty, argc, argv, value, required);
}

/* srte_candidate_no_bandwidth => "no bandwidth [BANDWIDTH$value] [required$required]" */
DEFUN_CMD_FUNC_DECL(srte_candidate_no_bandwidth)
#define funcdecl_srte_candidate_no_bandwidth static int srte_candidate_no_bandwidth_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * value,\
	const char * required)
funcdecl_srte_candidate_no_bandwidth;
DEFUN_CMD_FUNC_TEXT(srte_candidate_no_bandwidth)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *value = NULL;
	const char *required = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "required")) {
			required = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return srte_candidate_no_bandwidth_magic(self, vty, argc, argv, value, required);
}

/* srte_candidate_affinity_filter => "affinity <exclude-any|include-any|include-all>$type BITPATTERN$value" */
DEFUN_CMD_FUNC_DECL(srte_candidate_affinity_filter)
#define funcdecl_srte_candidate_affinity_filter static int srte_candidate_affinity_filter_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type,\
	const char * value)
funcdecl_srte_candidate_affinity_filter;
DEFUN_CMD_FUNC_TEXT(srte_candidate_affinity_filter)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;
	const char *value = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!value) {
		vty_out(vty, "Internal CLI error [%s]\n", "value");
		return CMD_WARNING;
	}

	return srte_candidate_affinity_filter_magic(self, vty, argc, argv, type, value);
}

/* srte_candidate_no_affinity_filter => "no affinity <exclude-any|include-any|include-all>$type [BITPATTERN$value]" */
DEFUN_CMD_FUNC_DECL(srte_candidate_no_affinity_filter)
#define funcdecl_srte_candidate_no_affinity_filter static int srte_candidate_no_affinity_filter_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type,\
	const char * value)
funcdecl_srte_candidate_no_affinity_filter;
DEFUN_CMD_FUNC_TEXT(srte_candidate_no_affinity_filter)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;
	const char *value = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return srte_candidate_no_affinity_filter_magic(self, vty, argc, argv, type, value);
}

/* srte_candidate_metric => "metric [bound$bound] <igp|te|hc|abc|lmll|cigp|cte|pigp|pte|phc|msd|pd|pdv|pl|ppd|ppdv|ppl|nap|nlp|dc|bnc>$type METRIC$value [required$required]" */
DEFUN_CMD_FUNC_DECL(srte_candidate_metric)
#define funcdecl_srte_candidate_metric static int srte_candidate_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * bound,\
	const char * type,\
	const char * value,\
	const char * required)
funcdecl_srte_candidate_metric;
DEFUN_CMD_FUNC_TEXT(srte_candidate_metric)
{
#if 4 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *bound = NULL;
	const char *type = NULL;
	const char *value = NULL;
	const char *required = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bound")) {
			bound = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "required")) {
			required = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!value) {
		vty_out(vty, "Internal CLI error [%s]\n", "value");
		return CMD_WARNING;
	}

	return srte_candidate_metric_magic(self, vty, argc, argv, bound, type, value, required);
}

/* srte_candidate_no_metric => "no metric [bound] <igp|te|hc|abc|lmll|cigp|cte|pigp|pte|phc|msd|pd|pdv|pl|ppd|ppdv|ppl|nap|nlp|dc|bnc>$type [METRIC$value] [required$required]" */
DEFUN_CMD_FUNC_DECL(srte_candidate_no_metric)
#define funcdecl_srte_candidate_no_metric static int srte_candidate_no_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type,\
	const char * value,\
	const char * required)
funcdecl_srte_candidate_no_metric;
DEFUN_CMD_FUNC_TEXT(srte_candidate_no_metric)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;
	const char *value = NULL;
	const char *required = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "required")) {
			required = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return srte_candidate_no_metric_magic(self, vty, argc, argv, type, value, required);
}

/* srte_policy_no_candidate => "no candidate-path	preference (0-4294967295)$preference	[name WORD	<	  explicit segment-list WORD	  |dynamic	>]" */
DEFUN_CMD_FUNC_DECL(srte_policy_no_candidate)
#define funcdecl_srte_policy_no_candidate static int srte_policy_no_candidate_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long preference,\
	const char * preference_str __attribute__ ((unused)),\
	const char * name,\
	const char * segment_list)
funcdecl_srte_policy_no_candidate;
DEFUN_CMD_FUNC_TEXT(srte_policy_no_candidate)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long preference = 0;
	const char *preference_str = NULL;
	const char *name = NULL;
	const char *segment_list = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "preference")) {
			preference_str = argv[_i]->arg;
			char *_end;
			preference = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "segment_list")) {
			segment_list = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!preference_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "preference_str");
		return CMD_WARNING;
	}

	return srte_policy_no_candidate_magic(self, vty, argc, argv, preference, preference_str, name, segment_list);
}

/* srte_candidate_objfun => "objective-function <mcp|mlp|mbp|mbc|mll|mcc|spt|mct|mplp|mup|mrup|mtd|mbn|mctd|msl|mss|msn>$type [required$required]" */
DEFUN_CMD_FUNC_DECL(srte_candidate_objfun)
#define funcdecl_srte_candidate_objfun static int srte_candidate_objfun_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type,\
	const char * required)
funcdecl_srte_candidate_objfun;
DEFUN_CMD_FUNC_TEXT(srte_candidate_objfun)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;
	const char *required = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "required")) {
			required = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return srte_candidate_objfun_magic(self, vty, argc, argv, type, required);
}

/* srte_candidate_no_objfun => "no objective-function [<mcp|mlp|mbp|mbc|mll|mcc|spt|mct|mplp|mup|mrup|mtd|mbn|mctd|msl|mss|msn>] [required$required]" */
DEFUN_CMD_FUNC_DECL(srte_candidate_no_objfun)
#define funcdecl_srte_candidate_no_objfun static int srte_candidate_no_objfun_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * required)
funcdecl_srte_candidate_no_objfun;
DEFUN_CMD_FUNC_TEXT(srte_candidate_no_objfun)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *required = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "required")) {
			required = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return srte_candidate_no_objfun_magic(self, vty, argc, argv, required);
}

/* show_debugging_pathd => "show debugging [pathd]" */
DEFUN_CMD_FUNC_DECL(show_debugging_pathd)
#define funcdecl_show_debugging_pathd static int show_debugging_pathd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_debugging_pathd;
DEFUN_CMD_FUNC_TEXT(show_debugging_pathd)
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

	return show_debugging_pathd_magic(self, vty, argc, argv);
}

