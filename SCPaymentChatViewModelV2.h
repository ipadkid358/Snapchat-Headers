/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTextChatViewModelV2.h>
#import <Snapchat/SCPaymentChatCellViewConfig.h>

@class NSArray, NSString;

@interface SCPaymentChatViewModelV2 : SCTextChatViewModelV2 <SCPaymentChatCellViewConfig> {

	NSArray* _cashTagRanges;
	NSString* _amountForDisplay;
	NSString* _recipientUsername;
	NSString* _text;
	BOOL _isSwipeToSend;
	BOOL _isBlocked;
	BOOL _isReleased;
	BOOL _isRetriableAfterFailToSend;
	BOOL _isSent;
	BOOL _isUnread;
	long long _paymentStatus;

}

@property (nonatomic,readonly) long long paymentStatus;              //@synthesize paymentStatus=_paymentStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cashTagColor;
+(id)statusSublabelFont;
+(id)statusLabelColor;
+(id)savedStatusTextFont;
+(id)statusTextFont;
+(id)cashBackgroundColor;
-(id)reusableCellIdentifier;
-(long long)paymentStatus;
-(id)rawText;
-(id)subLabelText;
-(id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(id)attributedTextWithFont:(id)arg1 ;
-(double)payloadHeight;
-(id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3 ;
-(double)bodyContentWidth;
-(double)payloadVerticalMargin;
-(id)attributedActionText;
-(BOOL)shouldShowActivity;
-(id)statusIconImage;
-(id)actionText;
-(BOOL)shouldShowChatLabel;
-(void)_setupV2:(id)arg1 ;
-(void)_setupV3:(id)arg1 ;
-(id)statusSubtext;
-(id)_otherDisplayName;
-(BOOL)shouldShowCashBackground;
-(BOOL)shouldAnimateSwipeToSendReceiverSparkles;
-(BOOL)shouldShowStatusSubtext;
-(BOOL)shouldResolveBlockers;
-(id)attributedStatusSubtext;
-(BOOL)shouldShowFailedImageView;
-(BOOL)isEqual:(id)arg1 ;
@end

