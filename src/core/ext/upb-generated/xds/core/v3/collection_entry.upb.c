/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/collection_entry.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "xds/core/v3/collection_entry.upb.h"
#include "google/protobuf/any.upb.h"
#include "udpa/annotations/status.upb.h"
#include "xds/core/v3/resource_locator.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const xds_core_v3_CollectionEntry_submsgs[2] = {
  &xds_core_v3_CollectionEntry_InlineEntry_msginit,
  &xds_core_v3_ResourceLocator_msginit,
};

static const upb_msglayout_field xds_core_v3_CollectionEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout xds_core_v3_CollectionEntry_msginit = {
  &xds_core_v3_CollectionEntry_submsgs[0],
  &xds_core_v3_CollectionEntry__fields[0],
  UPB_SIZE(8, 16), 2, false, 2, 255,
};

static const upb_msglayout *const xds_core_v3_CollectionEntry_InlineEntry_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field xds_core_v3_CollectionEntry_InlineEntry__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(20, 40), 1, 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout xds_core_v3_CollectionEntry_InlineEntry_msginit = {
  &xds_core_v3_CollectionEntry_InlineEntry_submsgs[0],
  &xds_core_v3_CollectionEntry_InlineEntry__fields[0],
  UPB_SIZE(24, 48), 3, false, 3, 255,
};

#include "upb/port_undef.inc"
