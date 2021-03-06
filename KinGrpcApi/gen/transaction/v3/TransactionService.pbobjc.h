// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transaction/v3/transaction_service.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class APBCommonV3Invoice;
@class APBCommonV3InvoiceList;
@class APBCommonV3StellarAccountId;
@class APBCommonV3TransactionHash;
@class APBTransactionV3Cursor;
@class APBTransactionV3HistoryItem;
@class APBTransactionV3SubmitTransactionResponse_InvoiceError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum APBTransactionV3GetHistoryRequest_Direction

typedef GPB_ENUM(APBTransactionV3GetHistoryRequest_Direction) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  APBTransactionV3GetHistoryRequest_Direction_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /**
   * ASC direction returns all history items in
   * ascending (based on chain order) from the cursor.
   **/
  APBTransactionV3GetHistoryRequest_Direction_Asc = 0,

  /**
   * DESC direction returns all history items in
   * descending (based on chain order) from _before_ the cursor.
   **/
  APBTransactionV3GetHistoryRequest_Direction_Desc = 1,
};

GPBEnumDescriptor *APBTransactionV3GetHistoryRequest_Direction_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL APBTransactionV3GetHistoryRequest_Direction_IsValidValue(int32_t value);

#pragma mark - Enum APBTransactionV3GetHistoryResponse_Result

typedef GPB_ENUM(APBTransactionV3GetHistoryResponse_Result) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  APBTransactionV3GetHistoryResponse_Result_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  APBTransactionV3GetHistoryResponse_Result_Ok = 0,
  APBTransactionV3GetHistoryResponse_Result_NotFound = 1,
};

GPBEnumDescriptor *APBTransactionV3GetHistoryResponse_Result_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL APBTransactionV3GetHistoryResponse_Result_IsValidValue(int32_t value);

#pragma mark - Enum APBTransactionV3SubmitTransactionResponse_Result

typedef GPB_ENUM(APBTransactionV3SubmitTransactionResponse_Result) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  APBTransactionV3SubmitTransactionResponse_Result_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  APBTransactionV3SubmitTransactionResponse_Result_Ok = 0,

  /**
   * There was an issue with submitting the transaction
   * to the underlying chain. Clients should retry with
   * a rebuilt transaction in case there is temporal
   * issues with the transaction, such as sequence number,
   * or some other chain-specific errors. The detail of
   * the error is present in the result xdr.
   **/
  APBTransactionV3SubmitTransactionResponse_Result_Failed = 1,

  /**
   * Indicates that the configured webhook for this transaction
   * rejected the transaction without a specified reason.
   **/
  APBTransactionV3SubmitTransactionResponse_Result_Rejected = 2,

  /**
   * Indicates there was an error with one or more of the
   * supplied invoices.
   *
   * See: invoice_errors.
   **/
  APBTransactionV3SubmitTransactionResponse_Result_InvoiceError = 3,
};

GPBEnumDescriptor *APBTransactionV3SubmitTransactionResponse_Result_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL APBTransactionV3SubmitTransactionResponse_Result_IsValidValue(int32_t value);

#pragma mark - Enum APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason

typedef GPB_ENUM(APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_Unknown = 0,

  /**
   * The provided invoice has already been paid for.
   *
   * This is only applicable when the memo transaction type
   * is SPEND.
   **/
  APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_AlreadyPaid = 1,

  /**
   * The destination in the operation corresponding to this invoice
   * is incorrect.
   **/
  APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_WrongDestination = 2,

  /** One or more SKUs in the invoice was not found. */
  APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_SkuNotFound = 3,
};

GPBEnumDescriptor *APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_IsValidValue(int32_t value);

#pragma mark - Enum APBTransactionV3GetTransactionResponse_State

typedef GPB_ENUM(APBTransactionV3GetTransactionResponse_State) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  APBTransactionV3GetTransactionResponse_State_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  APBTransactionV3GetTransactionResponse_State_Unknown = 0,
  APBTransactionV3GetTransactionResponse_State_Success = 1,
};

GPBEnumDescriptor *APBTransactionV3GetTransactionResponse_State_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL APBTransactionV3GetTransactionResponse_State_IsValidValue(int32_t value);

#pragma mark - APBTransactionV3TransactionServiceRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface APBTransactionV3TransactionServiceRoot : GPBRootObject
@end

#pragma mark - APBTransactionV3GetHistoryRequest

typedef GPB_ENUM(APBTransactionV3GetHistoryRequest_FieldNumber) {
  APBTransactionV3GetHistoryRequest_FieldNumber_AccountId = 1,
  APBTransactionV3GetHistoryRequest_FieldNumber_Cursor = 2,
  APBTransactionV3GetHistoryRequest_FieldNumber_Direction = 3,
};

@interface APBTransactionV3GetHistoryRequest : GPBMessage

/** Account to get history for. */
@property(nonatomic, readwrite, strong, null_resettable) APBCommonV3StellarAccountId *accountId;
/** Test to see if @c accountId has been set. */
@property(nonatomic, readwrite) BOOL hasAccountId;

/**
 * An optional history cursor indicating where in
 * the history to 'resume' from.
 **/
@property(nonatomic, readwrite, strong, null_resettable) APBTransactionV3Cursor *cursor;
/** Test to see if @c cursor has been set. */
@property(nonatomic, readwrite) BOOL hasCursor;

/**
 * The order in which to return history items from
 * the cursor.
 **/
@property(nonatomic, readwrite) APBTransactionV3GetHistoryRequest_Direction direction;

@end

/**
 * Fetches the raw value of a @c APBTransactionV3GetHistoryRequest's @c direction property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t APBTransactionV3GetHistoryRequest_Direction_RawValue(APBTransactionV3GetHistoryRequest *message);
/**
 * Sets the raw value of an @c APBTransactionV3GetHistoryRequest's @c direction property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAPBTransactionV3GetHistoryRequest_Direction_RawValue(APBTransactionV3GetHistoryRequest *message, int32_t value);

#pragma mark - APBTransactionV3GetHistoryResponse

typedef GPB_ENUM(APBTransactionV3GetHistoryResponse_FieldNumber) {
  APBTransactionV3GetHistoryResponse_FieldNumber_Result = 1,
  APBTransactionV3GetHistoryResponse_FieldNumber_ItemsArray = 2,
};

@interface APBTransactionV3GetHistoryResponse : GPBMessage

@property(nonatomic, readwrite) APBTransactionV3GetHistoryResponse_Result result;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<APBTransactionV3HistoryItem*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@end

/**
 * Fetches the raw value of a @c APBTransactionV3GetHistoryResponse's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t APBTransactionV3GetHistoryResponse_Result_RawValue(APBTransactionV3GetHistoryResponse *message);
/**
 * Sets the raw value of an @c APBTransactionV3GetHistoryResponse's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAPBTransactionV3GetHistoryResponse_Result_RawValue(APBTransactionV3GetHistoryResponse *message, int32_t value);

#pragma mark - APBTransactionV3SubmitTransactionRequest

typedef GPB_ENUM(APBTransactionV3SubmitTransactionRequest_FieldNumber) {
  APBTransactionV3SubmitTransactionRequest_FieldNumber_EnvelopeXdr = 1,
  APBTransactionV3SubmitTransactionRequest_FieldNumber_InvoiceList = 2,
};

@interface APBTransactionV3SubmitTransactionRequest : GPBMessage

/** The raw XDR bytes (not base64-encoded) of the transaction envelope. */
@property(nonatomic, readwrite, copy, null_resettable) NSData *envelopeXdr;

/**
 * An optional invoice list associating each operation with an invoice.
 *
 * If an invoice list is included, it is expected that the foreign key in
 * the transaction memo is the SHA-224 hash of the serialized invoice list.
 *
 * The invoice list will be included in webhook calls for the application the
 * transaction pertains to (as specified by the memo app index).
 *
 * The submitted invoice data will only be available for retrieval from the service it
 * was submitted to and not directly from the blockchain nor any other deployments of
 * the service.
 **/
@property(nonatomic, readwrite, strong, null_resettable) APBCommonV3InvoiceList *invoiceList;
/** Test to see if @c invoiceList has been set. */
@property(nonatomic, readwrite) BOOL hasInvoiceList;

@end

#pragma mark - APBTransactionV3SubmitTransactionResponse

typedef GPB_ENUM(APBTransactionV3SubmitTransactionResponse_FieldNumber) {
  APBTransactionV3SubmitTransactionResponse_FieldNumber_Result = 1,
  APBTransactionV3SubmitTransactionResponse_FieldNumber_InvoiceErrorsArray = 2,
  APBTransactionV3SubmitTransactionResponse_FieldNumber_Hash_p = 3,
  APBTransactionV3SubmitTransactionResponse_FieldNumber_Ledger = 4,
  APBTransactionV3SubmitTransactionResponse_FieldNumber_ResultXdr = 5,
};

@interface APBTransactionV3SubmitTransactionResponse : GPBMessage

@property(nonatomic, readwrite) APBTransactionV3SubmitTransactionResponse_Result result;

/** Present when result = INVOICE_ERROR. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<APBTransactionV3SubmitTransactionResponse_InvoiceError*> *invoiceErrorsArray;
/** The number of items in @c invoiceErrorsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger invoiceErrorsArray_Count;

/**
 * The hash of the transaction, if it was submitted.
 * May be used for other RPCs.
 **/
@property(nonatomic, readwrite, strong, null_resettable) APBCommonV3TransactionHash *hash_p;
/** Test to see if @c hash_p has been set. */
@property(nonatomic, readwrite) BOOL hasHash_p;

/**
 * The ledger in which the submitted transaction was included in.
 *
 * Non-zero on success.
 **/
@property(nonatomic, readwrite) int64_t ledger;

/** The transaction result XDR, if a transaction was submitted. */
@property(nonatomic, readwrite, copy, null_resettable) NSData *resultXdr;

@end

/**
 * Fetches the raw value of a @c APBTransactionV3SubmitTransactionResponse's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t APBTransactionV3SubmitTransactionResponse_Result_RawValue(APBTransactionV3SubmitTransactionResponse *message);
/**
 * Sets the raw value of an @c APBTransactionV3SubmitTransactionResponse's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAPBTransactionV3SubmitTransactionResponse_Result_RawValue(APBTransactionV3SubmitTransactionResponse *message, int32_t value);

#pragma mark - APBTransactionV3SubmitTransactionResponse_InvoiceError

typedef GPB_ENUM(APBTransactionV3SubmitTransactionResponse_InvoiceError_FieldNumber) {
  APBTransactionV3SubmitTransactionResponse_InvoiceError_FieldNumber_OpIndex = 1,
  APBTransactionV3SubmitTransactionResponse_InvoiceError_FieldNumber_Invoice = 2,
  APBTransactionV3SubmitTransactionResponse_InvoiceError_FieldNumber_Reason = 3,
};

@interface APBTransactionV3SubmitTransactionResponse_InvoiceError : GPBMessage

/** The operation index the invoice corresponds to. */
@property(nonatomic, readwrite) uint32_t opIndex;

/** The invoice that was submitted. */
@property(nonatomic, readwrite, strong, null_resettable) APBCommonV3Invoice *invoice;
/** Test to see if @c invoice has been set. */
@property(nonatomic, readwrite) BOOL hasInvoice;

@property(nonatomic, readwrite) APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason reason;

@end

/**
 * Fetches the raw value of a @c APBTransactionV3SubmitTransactionResponse_InvoiceError's @c reason property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t APBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_RawValue(APBTransactionV3SubmitTransactionResponse_InvoiceError *message);
/**
 * Sets the raw value of an @c APBTransactionV3SubmitTransactionResponse_InvoiceError's @c reason property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAPBTransactionV3SubmitTransactionResponse_InvoiceError_Reason_RawValue(APBTransactionV3SubmitTransactionResponse_InvoiceError *message, int32_t value);

#pragma mark - APBTransactionV3GetTransactionRequest

typedef GPB_ENUM(APBTransactionV3GetTransactionRequest_FieldNumber) {
  APBTransactionV3GetTransactionRequest_FieldNumber_TransactionHash = 1,
};

@interface APBTransactionV3GetTransactionRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) APBCommonV3TransactionHash *transactionHash;
/** Test to see if @c transactionHash has been set. */
@property(nonatomic, readwrite) BOOL hasTransactionHash;

@end

#pragma mark - APBTransactionV3GetTransactionResponse

typedef GPB_ENUM(APBTransactionV3GetTransactionResponse_FieldNumber) {
  APBTransactionV3GetTransactionResponse_FieldNumber_State = 1,
  APBTransactionV3GetTransactionResponse_FieldNumber_Ledger = 2,
  APBTransactionV3GetTransactionResponse_FieldNumber_Item = 3,
};

@interface APBTransactionV3GetTransactionResponse : GPBMessage

/**
 * The state of the transaction. The states are the same as
 * SubmitTransaction, with the exception of UNKNOWN, which indicates
 * that the system does not have a record of the transaction. This
 * can occur if the transaction is still pending or if it has failed.
 *
 * If the transaction state is UNKNOWN for an extended period of
 * time, it is likely that it was dropped. As a result, clients
 * should limit the total times GetTransaction is called for a
 * an UNKNOWN transaction.
 **/
@property(nonatomic, readwrite) APBTransactionV3GetTransactionResponse_State state;

/** Non-zero when state == State::SUCCESS */
@property(nonatomic, readwrite) int64_t ledger;

/** Present when state != State::UNKNOWN */
@property(nonatomic, readwrite, strong, null_resettable) APBTransactionV3HistoryItem *item;
/** Test to see if @c item has been set. */
@property(nonatomic, readwrite) BOOL hasItem;

@end

/**
 * Fetches the raw value of a @c APBTransactionV3GetTransactionResponse's @c state property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t APBTransactionV3GetTransactionResponse_State_RawValue(APBTransactionV3GetTransactionResponse *message);
/**
 * Sets the raw value of an @c APBTransactionV3GetTransactionResponse's @c state property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAPBTransactionV3GetTransactionResponse_State_RawValue(APBTransactionV3GetTransactionResponse *message, int32_t value);

#pragma mark - APBTransactionV3HistoryItem

typedef GPB_ENUM(APBTransactionV3HistoryItem_FieldNumber) {
  APBTransactionV3HistoryItem_FieldNumber_Hash_p = 1,
  APBTransactionV3HistoryItem_FieldNumber_ResultXdr = 2,
  APBTransactionV3HistoryItem_FieldNumber_EnvelopeXdr = 3,
  APBTransactionV3HistoryItem_FieldNumber_Cursor = 4,
  APBTransactionV3HistoryItem_FieldNumber_InvoiceList = 5,
};

@interface APBTransactionV3HistoryItem : GPBMessage

/** The hash of the transaction. */
@property(nonatomic, readwrite, strong, null_resettable) APBCommonV3TransactionHash *hash_p;
/** Test to see if @c hash_p has been set. */
@property(nonatomic, readwrite) BOOL hasHash_p;

/** Contains the transaction result from when the transaction was submitted */
@property(nonatomic, readwrite, copy, null_resettable) NSData *resultXdr;

/** Contains the transaction envelope for the transaction. */
@property(nonatomic, readwrite, copy, null_resettable) NSData *envelopeXdr;

/** The cursor position of this item. */
@property(nonatomic, readwrite, strong, null_resettable) APBTransactionV3Cursor *cursor;
/** Test to see if @c cursor has been set. */
@property(nonatomic, readwrite) BOOL hasCursor;

/**
 * If an invoice list was submitted with the transaction, and the transaction
 * was submitted via this instance of the service, this field will be set.
 **/
@property(nonatomic, readwrite, strong, null_resettable) APBCommonV3InvoiceList *invoiceList;
/** Test to see if @c invoiceList has been set. */
@property(nonatomic, readwrite) BOOL hasInvoiceList;

@end

#pragma mark - APBTransactionV3Cursor

typedef GPB_ENUM(APBTransactionV3Cursor_FieldNumber) {
  APBTransactionV3Cursor_FieldNumber_Value = 1,
};

@interface APBTransactionV3Cursor : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *value;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
