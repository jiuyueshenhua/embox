/**
 * @file
 * @brief TODO
 *
 * @date 18.03.2012
 * @author Alina Kramar
 */

#ifndef PROFILER_TRACING_TRACE_H_
#define PROFILER_TRACING_TRACE_H_

#include __impl_x(profiler/tracing/trace_impl.h)

#define TRACE_POINT_DEF(name, tp_name) \
	  __TRACE_POINT_DEF(name, tp_name)

#define TRACE_BLOCK_DEF(tb) \
	  __TRACE_BLOCK_DEF(tb)

#define trace_block_enter(tb_pointer) \
	  __trace_block_enter(tb_pointer) \

#define trace_block_leave(tb_pointer) \
	  __trace_block_leave(tb_pointer) \

#define trace_point_set(tp_pointer) \
	  __trace_point_set(tp_pointer)

#define trace_block_diff(tb_pointer) \
	  __trace_block_diff(tb_pointer)

#define trace_point(name) \
	  __trace_point(name)

#define trace_point_get_name(tp_pointer)  \
      __trace_point_get_name(tp_pointer)

#define trace_point_get_value(tp_pointer) \
      __trace_point_get_value(tp_pointer)

#endif /* PROFILER_TRACING_TRACE_H_ */
