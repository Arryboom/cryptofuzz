#pragma once

#include <cryptofuzz/components.h>
#include <cryptofuzz/module.h>
#include <optional>

namespace cryptofuzz {
namespace module {

class Reference : public Module {
        std::optional<component::Digest> WHIRLPOOL(operation::Digest& op, Datasource& ds) const;
    public:
        Reference(void);
        std::optional<component::Digest> OpDigest(operation::Digest& op) override;
};

} /* namespace module */
} /* namespace cryptofuzz */
