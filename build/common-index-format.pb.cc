// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common-index-format.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "common-index-format.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cif {

namespace {

const ::google::protobuf::Descriptor* Posting_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Posting_reflection_ = NULL;
const ::google::protobuf::Descriptor* PostingsList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PostingsList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_common_2dindex_2dformat_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_common_2dindex_2dformat_2eproto() {
  protobuf_AddDesc_common_2dindex_2dformat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "common-index-format.proto");
  GOOGLE_CHECK(file != NULL);
  Posting_descriptor_ = file->message_type(0);
  static const int Posting_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Posting, docid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Posting, tf_),
  };
  Posting_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Posting_descriptor_,
      Posting::default_instance_,
      Posting_offsets_,
      -1,
      -1,
      -1,
      sizeof(Posting),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Posting, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Posting, _is_default_instance_));
  PostingsList_descriptor_ = file->message_type(1);
  static const int PostingsList_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PostingsList, term_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PostingsList, df_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PostingsList, cf_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PostingsList, posting_),
  };
  PostingsList_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PostingsList_descriptor_,
      PostingsList::default_instance_,
      PostingsList_offsets_,
      -1,
      -1,
      -1,
      sizeof(PostingsList),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PostingsList, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PostingsList, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_common_2dindex_2dformat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Posting_descriptor_, &Posting::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PostingsList_descriptor_, &PostingsList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_common_2dindex_2dformat_2eproto() {
  delete Posting::default_instance_;
  delete Posting_reflection_;
  delete PostingsList::default_instance_;
  delete PostingsList_reflection_;
}

void protobuf_AddDesc_common_2dindex_2dformat_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_common_2dindex_2dformat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031common-index-format.proto\022\003cif\"$\n\007Post"
    "ing\022\r\n\005docid\030\001 \001(\005\022\n\n\002tf\030\002 \001(\005\"S\n\014Postin"
    "gsList\022\014\n\004term\030\001 \001(\t\022\n\n\002df\030\002 \001(\003\022\n\n\002cf\030\003"
    " \001(\003\022\035\n\007posting\030\004 \003(\0132\014.cif.Postingb\006pro"
    "to3", 163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "common-index-format.proto", &protobuf_RegisterTypes);
  Posting::default_instance_ = new Posting();
  PostingsList::default_instance_ = new PostingsList();
  Posting::default_instance_->InitAsDefaultInstance();
  PostingsList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_common_2dindex_2dformat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_common_2dindex_2dformat_2eproto {
  StaticDescriptorInitializer_common_2dindex_2dformat_2eproto() {
    protobuf_AddDesc_common_2dindex_2dformat_2eproto();
  }
} static_descriptor_initializer_common_2dindex_2dformat_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Posting::kDocidFieldNumber;
const int Posting::kTfFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Posting::Posting()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cif.Posting)
}

void Posting::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Posting::Posting(const Posting& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cif.Posting)
}

void Posting::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  docid_ = 0;
  tf_ = 0;
}

Posting::~Posting() {
  // @@protoc_insertion_point(destructor:cif.Posting)
  SharedDtor();
}

void Posting::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Posting::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Posting::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Posting_descriptor_;
}

const Posting& Posting::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2dindex_2dformat_2eproto();
  return *default_instance_;
}

Posting* Posting::default_instance_ = NULL;

Posting* Posting::New(::google::protobuf::Arena* arena) const {
  Posting* n = new Posting;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Posting::Clear() {
// @@protoc_insertion_point(message_clear_start:cif.Posting)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Posting, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Posting*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(docid_, tf_);

#undef ZR_HELPER_
#undef ZR_

}

bool Posting::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cif.Posting)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 docid = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &docid_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_tf;
        break;
      }

      // optional int32 tf = 2;
      case 2: {
        if (tag == 16) {
         parse_tf:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tf_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cif.Posting)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cif.Posting)
  return false;
#undef DO_
}

void Posting::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cif.Posting)
  // optional int32 docid = 1;
  if (this->docid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->docid(), output);
  }

  // optional int32 tf = 2;
  if (this->tf() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->tf(), output);
  }

  // @@protoc_insertion_point(serialize_end:cif.Posting)
}

::google::protobuf::uint8* Posting::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cif.Posting)
  // optional int32 docid = 1;
  if (this->docid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->docid(), target);
  }

  // optional int32 tf = 2;
  if (this->tf() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->tf(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:cif.Posting)
  return target;
}

int Posting::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cif.Posting)
  int total_size = 0;

  // optional int32 docid = 1;
  if (this->docid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->docid());
  }

  // optional int32 tf = 2;
  if (this->tf() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->tf());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Posting::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cif.Posting)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Posting* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Posting>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cif.Posting)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cif.Posting)
    MergeFrom(*source);
  }
}

void Posting::MergeFrom(const Posting& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cif.Posting)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.docid() != 0) {
    set_docid(from.docid());
  }
  if (from.tf() != 0) {
    set_tf(from.tf());
  }
}

void Posting::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cif.Posting)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Posting::CopyFrom(const Posting& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cif.Posting)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Posting::IsInitialized() const {

  return true;
}

void Posting::Swap(Posting* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Posting::InternalSwap(Posting* other) {
  std::swap(docid_, other->docid_);
  std::swap(tf_, other->tf_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Posting::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Posting_descriptor_;
  metadata.reflection = Posting_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Posting

// optional int32 docid = 1;
void Posting::clear_docid() {
  docid_ = 0;
}
 ::google::protobuf::int32 Posting::docid() const {
  // @@protoc_insertion_point(field_get:cif.Posting.docid)
  return docid_;
}
 void Posting::set_docid(::google::protobuf::int32 value) {
  
  docid_ = value;
  // @@protoc_insertion_point(field_set:cif.Posting.docid)
}

// optional int32 tf = 2;
void Posting::clear_tf() {
  tf_ = 0;
}
 ::google::protobuf::int32 Posting::tf() const {
  // @@protoc_insertion_point(field_get:cif.Posting.tf)
  return tf_;
}
 void Posting::set_tf(::google::protobuf::int32 value) {
  
  tf_ = value;
  // @@protoc_insertion_point(field_set:cif.Posting.tf)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PostingsList::kTermFieldNumber;
const int PostingsList::kDfFieldNumber;
const int PostingsList::kCfFieldNumber;
const int PostingsList::kPostingFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PostingsList::PostingsList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cif.PostingsList)
}

void PostingsList::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PostingsList::PostingsList(const PostingsList& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cif.PostingsList)
}

void PostingsList::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  term_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  df_ = GOOGLE_LONGLONG(0);
  cf_ = GOOGLE_LONGLONG(0);
}

PostingsList::~PostingsList() {
  // @@protoc_insertion_point(destructor:cif.PostingsList)
  SharedDtor();
}

void PostingsList::SharedDtor() {
  term_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PostingsList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PostingsList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PostingsList_descriptor_;
}

const PostingsList& PostingsList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2dindex_2dformat_2eproto();
  return *default_instance_;
}

PostingsList* PostingsList::default_instance_ = NULL;

PostingsList* PostingsList::New(::google::protobuf::Arena* arena) const {
  PostingsList* n = new PostingsList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PostingsList::Clear() {
// @@protoc_insertion_point(message_clear_start:cif.PostingsList)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PostingsList, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PostingsList*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(df_, cf_);
  term_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

  posting_.Clear();
}

bool PostingsList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cif.PostingsList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string term = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_term()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->term().data(), this->term().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "cif.PostingsList.term"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_df;
        break;
      }

      // optional int64 df = 2;
      case 2: {
        if (tag == 16) {
         parse_df:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &df_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_cf;
        break;
      }

      // optional int64 cf = 3;
      case 3: {
        if (tag == 24) {
         parse_cf:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &cf_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_posting;
        break;
      }

      // repeated .cif.Posting posting = 4;
      case 4: {
        if (tag == 34) {
         parse_posting:
          DO_(input->IncrementRecursionDepth());
         parse_loop_posting:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_posting()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_posting;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cif.PostingsList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cif.PostingsList)
  return false;
#undef DO_
}

void PostingsList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cif.PostingsList)
  // optional string term = 1;
  if (this->term().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->term().data(), this->term().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "cif.PostingsList.term");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->term(), output);
  }

  // optional int64 df = 2;
  if (this->df() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->df(), output);
  }

  // optional int64 cf = 3;
  if (this->cf() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->cf(), output);
  }

  // repeated .cif.Posting posting = 4;
  for (unsigned int i = 0, n = this->posting_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->posting(i), output);
  }

  // @@protoc_insertion_point(serialize_end:cif.PostingsList)
}

::google::protobuf::uint8* PostingsList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cif.PostingsList)
  // optional string term = 1;
  if (this->term().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->term().data(), this->term().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "cif.PostingsList.term");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->term(), target);
  }

  // optional int64 df = 2;
  if (this->df() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->df(), target);
  }

  // optional int64 cf = 3;
  if (this->cf() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->cf(), target);
  }

  // repeated .cif.Posting posting = 4;
  for (unsigned int i = 0, n = this->posting_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->posting(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:cif.PostingsList)
  return target;
}

int PostingsList::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cif.PostingsList)
  int total_size = 0;

  // optional string term = 1;
  if (this->term().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->term());
  }

  // optional int64 df = 2;
  if (this->df() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->df());
  }

  // optional int64 cf = 3;
  if (this->cf() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->cf());
  }

  // repeated .cif.Posting posting = 4;
  total_size += 1 * this->posting_size();
  for (int i = 0; i < this->posting_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->posting(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PostingsList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cif.PostingsList)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PostingsList* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PostingsList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cif.PostingsList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cif.PostingsList)
    MergeFrom(*source);
  }
}

void PostingsList::MergeFrom(const PostingsList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cif.PostingsList)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  posting_.MergeFrom(from.posting_);
  if (from.term().size() > 0) {

    term_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.term_);
  }
  if (from.df() != 0) {
    set_df(from.df());
  }
  if (from.cf() != 0) {
    set_cf(from.cf());
  }
}

void PostingsList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cif.PostingsList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PostingsList::CopyFrom(const PostingsList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cif.PostingsList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PostingsList::IsInitialized() const {

  return true;
}

void PostingsList::Swap(PostingsList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PostingsList::InternalSwap(PostingsList* other) {
  term_.Swap(&other->term_);
  std::swap(df_, other->df_);
  std::swap(cf_, other->cf_);
  posting_.UnsafeArenaSwap(&other->posting_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PostingsList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PostingsList_descriptor_;
  metadata.reflection = PostingsList_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PostingsList

// optional string term = 1;
void PostingsList::clear_term() {
  term_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PostingsList::term() const {
  // @@protoc_insertion_point(field_get:cif.PostingsList.term)
  return term_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PostingsList::set_term(const ::std::string& value) {
  
  term_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cif.PostingsList.term)
}
 void PostingsList::set_term(const char* value) {
  
  term_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cif.PostingsList.term)
}
 void PostingsList::set_term(const char* value, size_t size) {
  
  term_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cif.PostingsList.term)
}
 ::std::string* PostingsList::mutable_term() {
  
  // @@protoc_insertion_point(field_mutable:cif.PostingsList.term)
  return term_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PostingsList::release_term() {
  // @@protoc_insertion_point(field_release:cif.PostingsList.term)
  
  return term_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PostingsList::set_allocated_term(::std::string* term) {
  if (term != NULL) {
    
  } else {
    
  }
  term_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), term);
  // @@protoc_insertion_point(field_set_allocated:cif.PostingsList.term)
}

// optional int64 df = 2;
void PostingsList::clear_df() {
  df_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PostingsList::df() const {
  // @@protoc_insertion_point(field_get:cif.PostingsList.df)
  return df_;
}
 void PostingsList::set_df(::google::protobuf::int64 value) {
  
  df_ = value;
  // @@protoc_insertion_point(field_set:cif.PostingsList.df)
}

// optional int64 cf = 3;
void PostingsList::clear_cf() {
  cf_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 PostingsList::cf() const {
  // @@protoc_insertion_point(field_get:cif.PostingsList.cf)
  return cf_;
}
 void PostingsList::set_cf(::google::protobuf::int64 value) {
  
  cf_ = value;
  // @@protoc_insertion_point(field_set:cif.PostingsList.cf)
}

// repeated .cif.Posting posting = 4;
int PostingsList::posting_size() const {
  return posting_.size();
}
void PostingsList::clear_posting() {
  posting_.Clear();
}
const ::cif::Posting& PostingsList::posting(int index) const {
  // @@protoc_insertion_point(field_get:cif.PostingsList.posting)
  return posting_.Get(index);
}
::cif::Posting* PostingsList::mutable_posting(int index) {
  // @@protoc_insertion_point(field_mutable:cif.PostingsList.posting)
  return posting_.Mutable(index);
}
::cif::Posting* PostingsList::add_posting() {
  // @@protoc_insertion_point(field_add:cif.PostingsList.posting)
  return posting_.Add();
}
::google::protobuf::RepeatedPtrField< ::cif::Posting >*
PostingsList::mutable_posting() {
  // @@protoc_insertion_point(field_mutable_list:cif.PostingsList.posting)
  return &posting_;
}
const ::google::protobuf::RepeatedPtrField< ::cif::Posting >&
PostingsList::posting() const {
  // @@protoc_insertion_point(field_list:cif.PostingsList.posting)
  return posting_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace cif

// @@protoc_insertion_point(global_scope)
