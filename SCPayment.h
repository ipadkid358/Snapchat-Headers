/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPaymentMessageDelegate;
@class SCPaymentMessageSendState, NSString, NSArray;

@interface SCPayment : NSObject {

	BOOL _sentByUser;
	id<SCPaymentMessageDelegate> _messageDelegate;
	SCPaymentMessageSendState* _sendState;
	NSString* __id;
	long long _status;
	NSArray* _blockers;
	unsigned long long _amount;
	NSString* _currencyCode;
	NSString* _senderUsername;
	NSString* _recipientUsername;
	NSString* _senderID;
	NSString* _recipientID;
	NSString* _cvv;

}

@property (nonatomic,copy) NSString * _id;                                                     //@synthesize _id=__id - In the implementation block
@property (assign,nonatomic) long long status;                                                 //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * blockers;                                               //@synthesize blockers=_blockers - In the implementation block
@property (assign,nonatomic) unsigned long long amount;                                        //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                            //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSString * senderUsername;                                          //@synthesize senderUsername=_senderUsername - In the implementation block
@property (nonatomic,copy) NSString * recipientUsername;                                       //@synthesize recipientUsername=_recipientUsername - In the implementation block
@property (nonatomic,copy) NSString * senderID;                                                //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,copy) NSString * recipientID;                                             //@synthesize recipientID=_recipientID - In the implementation block
@property (assign,nonatomic) BOOL sentByUser;                                                  //@synthesize sentByUser=_sentByUser - In the implementation block
@property (assign,nonatomic,__weak) id<SCPaymentMessageDelegate> messageDelegate;              //@synthesize messageDelegate=_messageDelegate - In the implementation block
@property (nonatomic,retain) SCPaymentMessageSendState * sendState;                            //@synthesize sendState=_sendState - In the implementation block
@property (nonatomic,copy) NSString * cvv;                                                     //@synthesize cvv=_cvv - In the implementation block
+(id)amountForDisplay:(unsigned long long)arg1 ;
+(long long)paymentStatusFromSQDictionary:(id)arg1 ;
-(NSString *)senderUsername;
-(NSString *)recipientUsername;
-(void)setSenderUsername:(NSString *)arg1 ;
-(NSString *)_id;
-(void)setBlockers:(NSArray *)arg1 ;
-(void)setCvv:(NSString *)arg1 ;
-(id)getSenderStatementDescription;
-(id)getRecipientStatementDescription;
-(NSArray *)blockers;
-(NSString *)cvv;
-(BOOL)sentByUser;
-(void)setRecipientUsername:(NSString *)arg1 ;
-(void)setSentByUser:(BOOL)arg1 ;
-(void)set_id:(NSString *)arg1 ;
-(BOOL)shouldSaveCVVForSquareForwarding;
-(void)setRecipientID:(NSString *)arg1 ;
-(NSString *)recipientID;
-(SCPaymentMessageSendState *)sendState;
-(void)updateWithPayment:(id)arg1 ;
-(id<SCPaymentMessageDelegate>)messageDelegate;
-(BOOL)shouldNotifyDelegateOfBlockersChangeWithNewBlockers:(id)arg1 ;
-(id)initWithSender:(id)arg1 recipient:(id)arg2 amount:(unsigned long long)arg3 initialBlockers:(id)arg4 ;
-(id)initWithUsername:(id)arg1 dictionary:(id)arg2 ;
-(void)updateWithValidateTransactionDictionary:(id)arg1 ;
-(void)updateWithSquarePaymentResponseDictionary:(id)arg1 ;
-(void)updateWithSquareBlockerResponseDictionary:(id)arg1 ;
-(id)amountForDisplay;
-(void)setMessageDelegate:(id<SCPaymentMessageDelegate>)arg1 ;
-(void)setSendState:(SCPaymentMessageSendState *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAmount:(unsigned long long)arg1 ;
-(unsigned long long)amount;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setSenderID:(NSString *)arg1 ;
-(NSString *)senderID;
@end

