#ifndef SRC_ASN1_ASN1C_JSON_ENCODER_H_
#define SRC_ASN1_ASN1C_JSON_ENCODER_H_

#include <jansson.h>

struct asn_TYPE_descriptor_s;	/* Forward declaration */

json_t *json_encode(
    const struct asn_TYPE_descriptor_s *type_descriptor,
    const void *struct_ptr /* Structure to be encoded */
);

/*
 * Type of the generic JSON encoder.
 */
typedef json_t *(json_type_encoder_f)(
    const struct asn_TYPE_descriptor_s *type_descriptor,
    const void *struct_ptr /* Structure to be encoded */
);

#endif /* SRC_ASN1_ASN1C_JSON_ENCODER_H_ */
