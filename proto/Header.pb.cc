// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Header.proto

#include "Header.pb.h"

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
namespace whereable {
namespace t2am {
class HeaderDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Header> _instance;
} _Header_default_instance_;
}  // namespace t2am
}  // namespace whereable
static void InitDefaultsscc_info_Header_Header_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::whereable::t2am::_Header_default_instance_;
    new (ptr) ::whereable::t2am::Header();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::whereable::t2am::Header::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Header_Header_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Header_Header_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Header_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Header_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Header_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Header_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::whereable::t2am::Header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::whereable::t2am::Header, version_),
  PROTOBUF_FIELD_OFFSET(::whereable::t2am::Header, class_info_),
  PROTOBUF_FIELD_OFFSET(::whereable::t2am::Header, timestamp_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::whereable::t2am::Header)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::whereable::t2am::_Header_default_instance_),
};

const char descriptor_table_protodef_Header_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014Header.proto\022\016whereable.t2am\"@\n\006Header"
  "\022\017\n\007version\030\001 \001(\007\022\022\n\nclass_info\030\002 \001(\007\022\021\n"
  "\ttimestamp\030\003 \001(\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Header_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Header_2eproto_sccs[1] = {
  &scc_info_Header_Header_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Header_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Header_2eproto = {
  false, false, descriptor_table_protodef_Header_2eproto, "Header.proto", 104,
  &descriptor_table_Header_2eproto_once, descriptor_table_Header_2eproto_sccs, descriptor_table_Header_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_Header_2eproto::offsets,
  file_level_metadata_Header_2eproto, 1, file_level_enum_descriptors_Header_2eproto, file_level_service_descriptors_Header_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Header_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Header_2eproto)), true);
namespace whereable {
namespace t2am {

// ===================================================================

void Header::InitAsDefaultInstance() {
}
class Header::_Internal {
 public:
};

Header::Header(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:whereable.t2am.Header)
}
Header::Header(const Header& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&timestamp_) -
    reinterpret_cast<char*>(&version_)) + sizeof(timestamp_));
  // @@protoc_insertion_point(copy_constructor:whereable.t2am.Header)
}

void Header::SharedCtor() {
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timestamp_) -
      reinterpret_cast<char*>(&version_)) + sizeof(timestamp_));
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:whereable.t2am.Header)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Header::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Header::ArenaDtor(void* object) {
  Header* _this = reinterpret_cast< Header* >(object);
  (void)_this;
}
void Header::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Header& Header::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Header_Header_2eproto.base);
  return *internal_default_instance();
}


void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:whereable.t2am.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timestamp_) -
      reinterpret_cast<char*>(&version_)) + sizeof(timestamp_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Header::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // fixed32 version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          version_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // fixed32 class_info = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          class_info_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // int64 timestamp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* Header::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:whereable.t2am.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // fixed32 version = 1;
  if (this->version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(1, this->_internal_version(), target);
  }

  // fixed32 class_info = 2;
  if (this->class_info() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(2, this->_internal_class_info(), target);
  }

  // int64 timestamp = 3;
  if (this->timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_timestamp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:whereable.t2am.Header)
  return target;
}

size_t Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:whereable.t2am.Header)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // fixed32 version = 1;
  if (this->version() != 0) {
    total_size += 1 + 4;
  }

  // fixed32 class_info = 2;
  if (this->class_info() != 0) {
    total_size += 1 + 4;
  }

  // int64 timestamp = 3;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_timestamp());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Header::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:whereable.t2am.Header)
  GOOGLE_DCHECK_NE(&from, this);
  const Header* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Header>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:whereable.t2am.Header)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:whereable.t2am.Header)
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:whereable.t2am.Header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.version() != 0) {
    _internal_set_version(from._internal_version());
  }
  if (from.class_info() != 0) {
    _internal_set_class_info(from._internal_class_info());
  }
  if (from.timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
}

void Header::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:whereable.t2am.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:whereable.t2am.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  return true;
}

void Header::InternalSwap(Header* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Header, timestamp_)
      + sizeof(Header::timestamp_)
      - PROTOBUF_FIELD_OFFSET(Header, version_)>(
          reinterpret_cast<char*>(&version_),
          reinterpret_cast<char*>(&other->version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Header::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace t2am
}  // namespace whereable
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::whereable::t2am::Header* Arena::CreateMaybeMessage< ::whereable::t2am::Header >(Arena* arena) {
  return Arena::CreateMessageInternal< ::whereable::t2am::Header >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
