// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/label.proto

#include "google/api/label.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace google {
namespace api {
class LabelDescriptorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LabelDescriptor> _instance;
} _LabelDescriptor_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_LabelDescriptor_google_2fapi_2flabel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_LabelDescriptor_default_instance_;
    new (ptr) ::google::api::LabelDescriptor();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::LabelDescriptor::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LabelDescriptor_google_2fapi_2flabel_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LabelDescriptor_google_2fapi_2flabel_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2flabel_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2flabel_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2flabel_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2flabel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::LabelDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::LabelDescriptor, key_),
  PROTOBUF_FIELD_OFFSET(::google::api::LabelDescriptor, value_type_),
  PROTOBUF_FIELD_OFFSET(::google::api::LabelDescriptor, description_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::LabelDescriptor)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_LabelDescriptor_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2flabel_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026google/api/label.proto\022\ngoogle.api\"\234\001\n"
  "\017LabelDescriptor\022\013\n\003key\030\001 \001(\t\0229\n\nvalue_t"
  "ype\030\002 \001(\0162%.google.api.LabelDescriptor.V"
  "alueType\022\023\n\013description\030\003 \001(\t\",\n\tValueTy"
  "pe\022\n\n\006STRING\020\000\022\010\n\004BOOL\020\001\022\t\n\005INT64\020\002B_\n\016c"
  "om.google.apiB\nLabelProtoP\001Z5google.gola"
  "ng.org/genproto/googleapis/api/label;lab"
  "el\370\001\001\242\002\004GAPIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2flabel_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2flabel_2eproto_sccs[1] = {
  &scc_info_LabelDescriptor_google_2fapi_2flabel_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2flabel_2eproto_once;
static bool descriptor_table_google_2fapi_2flabel_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2flabel_2eproto = {
  &descriptor_table_google_2fapi_2flabel_2eproto_initialized, descriptor_table_protodef_google_2fapi_2flabel_2eproto, "google/api/label.proto", 300,
  &descriptor_table_google_2fapi_2flabel_2eproto_once, descriptor_table_google_2fapi_2flabel_2eproto_sccs, descriptor_table_google_2fapi_2flabel_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2fapi_2flabel_2eproto::offsets,
  file_level_metadata_google_2fapi_2flabel_2eproto, 1, file_level_enum_descriptors_google_2fapi_2flabel_2eproto, file_level_service_descriptors_google_2fapi_2flabel_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2flabel_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2flabel_2eproto), true);
namespace google {
namespace api {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LabelDescriptor_ValueType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2flabel_2eproto);
  return file_level_enum_descriptors_google_2fapi_2flabel_2eproto[0];
}
bool LabelDescriptor_ValueType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr LabelDescriptor_ValueType LabelDescriptor::STRING;
constexpr LabelDescriptor_ValueType LabelDescriptor::BOOL;
constexpr LabelDescriptor_ValueType LabelDescriptor::INT64;
constexpr LabelDescriptor_ValueType LabelDescriptor::ValueType_MIN;
constexpr LabelDescriptor_ValueType LabelDescriptor::ValueType_MAX;
constexpr int LabelDescriptor::ValueType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void LabelDescriptor::InitAsDefaultInstance() {
}
class LabelDescriptor::_Internal {
 public:
};

LabelDescriptor::LabelDescriptor()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.LabelDescriptor)
}
LabelDescriptor::LabelDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.LabelDescriptor)
}
LabelDescriptor::LabelDescriptor(const LabelDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_key().empty()) {
    key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_key(),
      GetArenaNoVirtual());
  }
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_description().empty()) {
    description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_description(),
      GetArenaNoVirtual());
  }
  value_type_ = from.value_type_;
  // @@protoc_insertion_point(copy_constructor:google.api.LabelDescriptor)
}

void LabelDescriptor::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LabelDescriptor_google_2fapi_2flabel_2eproto.base);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_type_ = 0;
}

LabelDescriptor::~LabelDescriptor() {
  // @@protoc_insertion_point(destructor:google.api.LabelDescriptor)
  SharedDtor();
}

void LabelDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
  key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LabelDescriptor::ArenaDtor(void* object) {
  LabelDescriptor* _this = reinterpret_cast< LabelDescriptor* >(object);
  (void)_this;
}
void LabelDescriptor::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LabelDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LabelDescriptor& LabelDescriptor::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LabelDescriptor_google_2fapi_2flabel_2eproto.base);
  return *internal_default_instance();
}


void LabelDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.LabelDescriptor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  description_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  value_type_ = 0;
  _internal_metadata_.Clear();
}

const char* LabelDescriptor::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_key(), ptr, ctx, "google.api.LabelDescriptor.key");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.api.LabelDescriptor.ValueType value_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_value_type(static_cast<::google::api::LabelDescriptor_ValueType>(val));
        } else goto handle_unusual;
        continue;
      // string description = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_description(), ptr, ctx, "google.api.LabelDescriptor.description");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LabelDescriptor::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.LabelDescriptor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_key().data(), static_cast<int>(this->_internal_key().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.LabelDescriptor.key");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_key(), target);
  }

  // .google.api.LabelDescriptor.ValueType value_type = 2;
  if (this->value_type() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_value_type(), target);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_description().data(), static_cast<int>(this->_internal_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.LabelDescriptor.description");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_description(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.LabelDescriptor)
  return target;
}

size_t LabelDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.LabelDescriptor)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_key());
  }

  // string description = 3;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_description());
  }

  // .google.api.LabelDescriptor.ValueType value_type = 2;
  if (this->value_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_value_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LabelDescriptor::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.LabelDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  const LabelDescriptor* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LabelDescriptor>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.LabelDescriptor)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.LabelDescriptor)
    MergeFrom(*source);
  }
}

void LabelDescriptor::MergeFrom(const LabelDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.LabelDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.key().size() > 0) {
    _internal_set_key(from._internal_key());
  }
  if (from.description().size() > 0) {
    _internal_set_description(from._internal_description());
  }
  if (from.value_type() != 0) {
    _internal_set_value_type(from._internal_value_type());
  }
}

void LabelDescriptor::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.LabelDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LabelDescriptor::CopyFrom(const LabelDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.LabelDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LabelDescriptor::IsInitialized() const {
  return true;
}

void LabelDescriptor::InternalSwap(LabelDescriptor* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  key_.Swap(&other->key_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  description_.Swap(&other->description_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(value_type_, other->value_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LabelDescriptor::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::LabelDescriptor* Arena::CreateMaybeMessage< ::google::api::LabelDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::LabelDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
