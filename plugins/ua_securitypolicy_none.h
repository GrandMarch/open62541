/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#ifndef UA_SECURITYPOLICY_NONE_H_
#define UA_SECURITYPOLICY_NONE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ua_plugin_securitypolicy.h"
#include "ua_plugin_log.h"

UA_StatusCode UA_EXPORT
UA_SecurityPolicy_None(UA_SecurityPolicy *policy, const UA_ByteString localCertificate,
                       UA_Logger logger);

#ifdef __cplusplus
}
#endif

#endif /* UA_SECURITYPOLICY_NONE_H_ */
