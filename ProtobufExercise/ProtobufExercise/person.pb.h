// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: person.proto
// Protobuf C++ Version: 5.28.0-dev

#ifndef GOOGLE_PROTOBUF_INCLUDED_person_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_person_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5028000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_person_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_person_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_person_2eproto;
class Person;
struct PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Person final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:Person) */ {
 public:
  inline Person() : Person(nullptr) {}
  ~Person() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Person(
      ::google::protobuf::internal::ConstantInitialized);

  inline Person(const Person& from) : Person(nullptr, from) {}
  inline Person(Person&& from) noexcept
      : Person(nullptr, std::move(from)) {}
  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  inline Person& operator=(Person&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Person& default_instance() {
    return *internal_default_instance();
  }
  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
        &_Person_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Person& a, Person& b) { a.Swap(&b); }
  inline void Swap(Person* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Person* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Person* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Person>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Person& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Person& from) { Person::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Person* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "Person"; }

 protected:
  explicit Person(::google::protobuf::Arena* arena);
  Person(::google::protobuf::Arena* arena, const Person& from);
  Person(::google::protobuf::Arena* arena, Person&& from) noexcept
      : Person(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kNameFieldNumber = 1,
    kEmailFieldNumber = 3,
    kIdFieldNumber = 2,
  };
  // string name = 1;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // string email = 3;
  void clear_email() ;
  const std::string& email() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_email(Arg_&& arg, Args_... args);
  std::string* mutable_email();
  PROTOBUF_NODISCARD std::string* release_email();
  void set_allocated_email(std::string* value);

  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(
      const std::string& value);
  std::string* _internal_mutable_email();

  public:
  // int32 id = 2;
  void clear_id() ;
  ::int32_t id() const;
  void set_id(::int32_t value);

  private:
  ::int32_t _internal_id() const;
  void _internal_set_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:Person)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      24, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Person_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Person& from_msg);
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr email_;
    ::int32_t id_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_person_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Person

// string name = 1;
inline void Person::clear_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Person::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Person.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Person::set_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Person.name)
}
inline std::string* Person::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Person.name)
  return _s;
}
inline const std::string& Person::_internal_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.name_.Get();
}
inline void Person::_internal_set_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Person::_internal_mutable_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Person::release_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:Person.name)
  return _impl_.name_.Release();
}
inline void Person::set_allocated_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Person.name)
}

// int32 id = 2;
inline void Person::clear_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_ = 0;
}
inline ::int32_t Person::id() const {
  // @@protoc_insertion_point(field_get:Person.id)
  return _internal_id();
}
inline void Person::set_id(::int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Person.id)
}
inline ::int32_t Person::_internal_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.id_;
}
inline void Person::_internal_set_id(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_ = value;
}

// string email = 3;
inline void Person::clear_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.ClearToEmpty();
}
inline const std::string& Person::email() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Person.email)
  return _internal_email();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Person::set_email(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Person.email)
}
inline std::string* Person::mutable_email() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:Person.email)
  return _s;
}
inline const std::string& Person::_internal_email() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.email_.Get();
}
inline void Person::_internal_set_email(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.Set(value, GetArena());
}
inline std::string* Person::_internal_mutable_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.email_.Mutable( GetArena());
}
inline std::string* Person::release_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:Person.email)
  return _impl_.email_.Release();
}
inline void Person::set_allocated_email(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.email_.IsDefault()) {
          _impl_.email_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Person.email)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_person_2eproto_2epb_2eh
