/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAGeofilterOndemandEventBase.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface SCAGeofilterOndemandPurchaseLineItem : SCAGeofilterOndemandEventBase <MapSerializable, NSCopying> {

	NSNumber* offerAmountValue;
	NSNumber* offerSequenceId;
	NSNumber* offerAreaSquareFeet;
	NSNumber* offerDiscountCodeValue;
	NSNumber* creativeStickerCount;
	NSNumber* creativeTextBoxCount;
	NSNumber* creativeBitmojiCount;
	NSNumber* creativeEmojiCount;
	NSNumber* creativeCustomStickerCount;
	NSNumber* success;
	NSNumber* creativeFriendmojiCount;
	NSNumber* creativeNonSelfBitmojiCount;
	NSNumber* isPreviouslyAutoRejected;
	NSNumber* isFromLineItemDraft;
	NSString* lineItemId;
	NSString* offerCurrency;
	NSString* fence;
	NSString* offerCountry;
	NSString* viewportSouthEast;
	NSString* viewportSouthWest;
	NSString* viewportNorthEast;
	NSString* viewportNorthWest;
	NSString* offerId;
	NSString* odgRulesVersion;
	NSString* offerDiscountCodeType;
	NSString* offerDiscountCode;
	NSString* creativeTemplateId;
	NSString* creativeColorUsed;
	NSString* creativeStickerId;
	NSString* creativeTextBoxMeta;
	NSString* creativeBitmojiIds;
	NSString* creativeEmojiIds;
	NSString* creativeCustomStickerId;
	NSString* submitError;
	NSString* productId;
	NSString* creativeFriendmojiIds;
	NSString* creativeNonSelfBitmojiIds;
	NSString* draftId;
	NSDate* scheduledStartTime;
	NSDate* scheduledEndTime;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getLineItemId;
-(void)setLineItemId:(id)arg1 ;
-(BOOL)getSuccess;
-(id)getProductId;
-(id)getCreativeTemplateId;
-(void)setCreativeTemplateId:(id)arg1 ;
-(double)getOfferAmountValue;
-(void)setOfferAmountValue:(double)arg1 ;
-(long long)getOfferSequenceId;
-(void)setOfferSequenceId:(long long)arg1 ;
-(id)getFence;
-(void)setFence:(id)arg1 ;
-(id)getOfferCountry;
-(void)setOfferCountry:(id)arg1 ;
-(id)getOfferId;
-(void)setOfferId:(id)arg1 ;
-(id)getOdgRulesVersion;
-(void)setOdgRulesVersion:(id)arg1 ;
-(id)getScheduledStartTime;
-(void)setScheduledStartTime:(id)arg1 ;
-(id)getScheduledEndTime;
-(void)setScheduledEndTime:(id)arg1 ;
-(id)getViewportSouthEast;
-(void)setViewportSouthEast:(id)arg1 ;
-(id)getViewportNorthWest;
-(void)setViewportNorthWest:(id)arg1 ;
-(id)getCreativeColorUsed;
-(void)setCreativeColorUsed:(id)arg1 ;
-(id)getCreativeBitmojiIds;
-(void)setCreativeBitmojiIds:(id)arg1 ;
-(id)getCreativeFriendmojiIds;
-(void)setCreativeFriendmojiIds:(id)arg1 ;
-(id)getOfferCurrency;
-(void)setOfferCurrency:(id)arg1 ;
-(double)getOfferAreaSquareFeet;
-(void)setOfferAreaSquareFeet:(double)arg1 ;
-(double)getOfferDiscountCodeValue;
-(void)setOfferDiscountCodeValue:(double)arg1 ;
-(id)getViewportSouthWest;
-(void)setViewportSouthWest:(id)arg1 ;
-(id)getViewportNorthEast;
-(void)setViewportNorthEast:(id)arg1 ;
-(id)getOfferDiscountCode;
-(void)setOfferDiscountCode:(id)arg1 ;
-(id)getOfferDiscountCodeType;
-(void)setOfferDiscountCodeType:(id)arg1 ;
-(long long)getCreativeStickerCount;
-(void)setCreativeStickerCount:(long long)arg1 ;
-(long long)getCreativeTextBoxCount;
-(void)setCreativeTextBoxCount:(long long)arg1 ;
-(long long)getCreativeBitmojiCount;
-(void)setCreativeBitmojiCount:(long long)arg1 ;
-(long long)getCreativeEmojiCount;
-(void)setCreativeEmojiCount:(long long)arg1 ;
-(long long)getCreativeCustomStickerCount;
-(void)setCreativeCustomStickerCount:(long long)arg1 ;
-(long long)getCreativeFriendmojiCount;
-(void)setCreativeFriendmojiCount:(long long)arg1 ;
-(long long)getCreativeNonSelfBitmojiCount;
-(void)setCreativeNonSelfBitmojiCount:(long long)arg1 ;
-(BOOL)getIsPreviouslyAutoRejected;
-(void)setIsPreviouslyAutoRejected:(BOOL)arg1 ;
-(BOOL)getIsFromLineItemDraft;
-(void)setIsFromLineItemDraft:(BOOL)arg1 ;
-(id)getCreativeStickerId;
-(void)setCreativeStickerId:(id)arg1 ;
-(id)getCreativeTextBoxMeta;
-(void)setCreativeTextBoxMeta:(id)arg1 ;
-(id)getCreativeEmojiIds;
-(void)setCreativeEmojiIds:(id)arg1 ;
-(id)getCreativeCustomStickerId;
-(void)setCreativeCustomStickerId:(id)arg1 ;
-(id)getSubmitError;
-(void)setSubmitError:(id)arg1 ;
-(id)getCreativeNonSelfBitmojiIds;
-(void)setCreativeNonSelfBitmojiIds:(id)arg1 ;
-(id)getDraftId;
-(void)setDraftId:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProductId:(id)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(id)asDictionary;
@end

