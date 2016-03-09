// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// This test simply includes all the C++ headers to ensure they compile with a
// C++ compiler.  If it compiles, it passes.
//
#ifndef PPAPI_TESTS_ALL_CPP_INCLUDES_H_
#define PPAPI_TESTS_ALL_CPP_INCLUDES_H_

#include "ppapi/cpp/audio.h"
#include "ppapi/cpp/audio_buffer.h"
#include "ppapi/cpp/audio_config.h"
#include "ppapi/cpp/completion_callback.h"
#include "ppapi/cpp/compositor.h"
#include "ppapi/cpp/compositor_layer.h"
#include "ppapi/cpp/core.h"
#include "ppapi/cpp/dev/buffer_dev.h"
#include "ppapi/cpp/dev/device_ref_dev.h"
#include "ppapi/cpp/dev/file_chooser_dev.h"
#include "ppapi/cpp/dev/ime_input_event_dev.h"
#include "ppapi/cpp/dev/memory_dev.h"
#include "ppapi/cpp/dev/printing_dev.h"
#include "ppapi/cpp/dev/scriptable_object_deprecated.h"
#include "ppapi/cpp/dev/text_input_dev.h"
#include "ppapi/cpp/dev/url_util_dev.h"
#include "ppapi/cpp/dev/video_decoder_dev.h"
#include "ppapi/cpp/dev/view_dev.h"
#include "ppapi/cpp/directory_entry.h"
#include "ppapi/cpp/file_io.h"
#include "ppapi/cpp/file_ref.h"
#include "ppapi/cpp/file_system.h"
#include "ppapi/cpp/fullscreen.h"
#include "ppapi/cpp/graphics_2d.h"
#include "ppapi/cpp/graphics_3d.h"
#include "ppapi/cpp/graphics_3d_client.h"
#include "ppapi/cpp/host_resolver.h"
#include "ppapi/cpp/image_data.h"
#include "ppapi/cpp/instance.h"
#include "ppapi/cpp/logging.h"
#include "ppapi/cpp/media_stream_audio_track.h"
#include "ppapi/cpp/media_stream_video_track.h"
#include "ppapi/cpp/module.h"
#include "ppapi/cpp/module_impl.h"
#include "ppapi/cpp/mouse_lock.h"
#include "ppapi/cpp/net_address.h"
#include "ppapi/cpp/network_proxy.h"
#include "ppapi/cpp/point.h"
#include "ppapi/cpp/private/camera_capabilities_private.h"
#include "ppapi/cpp/private/camera_device_private.h"
#include "ppapi/cpp/private/content_decryptor_private.h"
#include "ppapi/cpp/private/find_private.h"
#include "ppapi/cpp/private/flash_font_file.h"
#include "ppapi/cpp/private/flash_fullscreen.h"
#include "ppapi/cpp/private/instance_private.h"
#include "ppapi/cpp/private/instance_private.h"
#include "ppapi/cpp/private/net_address_private.h"
#include "ppapi/cpp/private/tcp_socket_private.h"
#include "ppapi/cpp/private/udp_socket_private.h"
#include "ppapi/cpp/private/var_private.h"
#include "ppapi/cpp/private/video_destination_private.h"
#include "ppapi/cpp/private/video_frame_private.h"
#include "ppapi/cpp/private/video_source_private.h"
#include "ppapi/cpp/rect.h"
#include "ppapi/cpp/resource.h"
#include "ppapi/cpp/size.h"
#include "ppapi/cpp/tcp_socket.h"
#include "ppapi/cpp/text_input_controller.h"
#include "ppapi/cpp/touch_point.h"
#include "ppapi/cpp/udp_socket.h"
#include "ppapi/cpp/url_loader.h"
#include "ppapi/cpp/url_request_info.h"
#include "ppapi/cpp/url_response_info.h"
#include "ppapi/cpp/var.h"
#include "ppapi/cpp/var_array.h"
#include "ppapi/cpp/var_array_buffer.h"
#include "ppapi/cpp/var_dictionary.h"
#include "ppapi/cpp/video_frame.h"
#include "ppapi/cpp/websocket.h"
#include "ppapi/utility/completion_callback_factory.h"
#include "ppapi/utility/completion_callback_factory_thread_traits.h"
#include "ppapi/utility/graphics/paint_aggregator.h"
#include "ppapi/utility/graphics/paint_manager.h"
#include "ppapi/utility/threading/lock.h"
#include "ppapi/utility/threading/simple_thread.h"

#endif  // PPAPI_TESTS_ALL_CPP_INCLUDES_H_
