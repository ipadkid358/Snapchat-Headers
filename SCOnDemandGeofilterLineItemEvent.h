/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOnDemandGeofilterDataControllerListener.h>

@class SCOnDemandGeofilterEventsLogger, SCAGeofilterOndemandOfferPreview, SCAGeofilterOndemandPurchaseLineItem, SOJUUnlockablesOndemandLineItem, NSString;

@interface SCOnDemandGeofilterLineItemEvent : NSObject <SCOnDemandGeofilterDataControllerListener> {

	SCOnDemandGeofilterEventsLogger* _eventsLogger;
	SCAGeofilterOndemandOfferPreview* _offerPreviewEvent;
	SCAGeofilterOndemandPurchaseLineItem* _purchaseLineItemEvent;
	BOOL _fromLineItemDraft;
	SOJUUnlockablesOndemandLineItem* _lineItem;
	NSString* _viewportNorthWest;
	NSString* _viewportNorthEast;
	NSString* _viewportSouthEast;
	NSString* _viewportSouthWest;
	unsigned long long _offerSequenceId;
	NSString* _creativeTemplateId;
	NSString* _creativeColorUsed;
	NSString* _creativeStickerIds;
	unsigned long long _creativeStickerCount;
	NSString* _creativeTextBoxes;
	unsigned long long _creativeTextBoxesCount;
	NSString* _creativeBitmojiIds;
	unsigned long long _creativeBitmojiCount;
	NSString* _creativeNonSelfBitmojiIds;
	unsigned long long _creativeNonSelfBitmojiCount;
	NSString* _creativeFriendmojiIds;
	unsigned long long _creativeFriendmojiCount;
	NSString* _referrer;
	NSString* _draftId;

}

@property (nonatomic,retain) SOJUUnlockablesOndemandLineItem * lineItem;                     //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,retain) NSString * viewportNorthWest;                                   //@synthesize viewportNorthWest=_viewportNorthWest - In the implementation block
@property (nonatomic,retain) NSString * viewportNorthEast;                                   //@synthesize viewportNorthEast=_viewportNorthEast - In the implementation block
@property (nonatomic,retain) NSString * viewportSouthEast;                                   //@synthesize viewportSouthEast=_viewportSouthEast - In the implementation block
@property (nonatomic,retain) NSString * viewportSouthWest;                                   //@synthesize viewportSouthWest=_viewportSouthWest - In the implementation block
@property (assign,nonatomic) unsigned long long offerSequenceId;                             //@synthesize offerSequenceId=_offerSequenceId - In the implementation block
@property (nonatomic,retain) NSString * creativeTemplateId;                                  //@synthesize creativeTemplateId=_creativeTemplateId - In the implementation block
@property (nonatomic,retain) NSString * creativeColorUsed;                                   //@synthesize creativeColorUsed=_creativeColorUsed - In the implementation block
@property (nonatomic,retain) NSString * creativeStickerIds;                                  //@synthesize creativeStickerIds=_creativeStickerIds - In the implementation block
@property (assign,nonatomic) unsigned long long creativeStickerCount;                        //@synthesize creativeStickerCount=_creativeStickerCount - In the implementation block
@property (nonatomic,retain) NSString * creativeTextBoxes;                                   //@synthesize creativeTextBoxes=_creativeTextBoxes - In the implementation block
@property (assign,nonatomic) unsigned long long creativeTextBoxesCount;                      //@synthesize creativeTextBoxesCount=_creativeTextBoxesCount - In the implementation block
@property (nonatomic,retain) NSString * creativeBitmojiIds;                                  //@synthesize creativeBitmojiIds=_creativeBitmojiIds - In the implementation block
@property (assign,nonatomic) unsigned long long creativeBitmojiCount;                        //@synthesize creativeBitmojiCount=_creativeBitmojiCount - In the implementation block
@property (nonatomic,retain) NSString * creativeNonSelfBitmojiIds;                           //@synthesize creativeNonSelfBitmojiIds=_creativeNonSelfBitmojiIds - In the implementation block
@property (assign,nonatomic) unsigned long long creativeNonSelfBitmojiCount;                 //@synthesize creativeNonSelfBitmojiCount=_creativeNonSelfBitmojiCount - In the implementation block
@property (nonatomic,retain) NSString * creativeFriendmojiIds;                               //@synthesize creativeFriendmojiIds=_creativeFriendmojiIds - In the implementation block
@property (assign,nonatomic) unsigned long long creativeFriendmojiCount;                     //@synthesize creativeFriendmojiCount=_creativeFriendmojiCount - In the implementation block
@property (nonatomic,retain) NSString * referrer;                                            //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,retain) NSString * draftId;                                             //@synthesize draftId=_draftId - In the implementation block
@property (assign,getter=isFromLineItemDraft,nonatomic) BOOL fromLineItemDraft;              //@synthesize fromLineItemDraft=_fromLineItemDraft - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReferrer:(NSString *)arg1 ;
-(void)setCreativeTemplateId:(NSString *)arg1 ;
-(NSString *)creativeTemplateId;
-(void)setOfferSequenceId:(unsigned long long)arg1 ;
-(unsigned long long)offerSequenceId;
-(void)setViewportSouthEast:(NSString *)arg1 ;
-(void)setViewportNorthWest:(NSString *)arg1 ;
-(void)setCreativeColorUsed:(NSString *)arg1 ;
-(void)setCreativeBitmojiIds:(NSString *)arg1 ;
-(void)setCreativeFriendmojiIds:(NSString *)arg1 ;
-(NSString *)viewportSouthEast;
-(NSString *)viewportNorthWest;
-(NSString *)creativeColorUsed;
-(NSString *)creativeBitmojiIds;
-(NSString *)creativeFriendmojiIds;
-(void)setViewportSouthWest:(NSString *)arg1 ;
-(void)setViewportNorthEast:(NSString *)arg1 ;
-(NSString *)viewportSouthWest;
-(NSString *)viewportNorthEast;
-(void)setCreativeStickerCount:(unsigned long long)arg1 ;
-(void)setCreativeBitmojiCount:(unsigned long long)arg1 ;
-(void)setCreativeFriendmojiCount:(unsigned long long)arg1 ;
-(void)setCreativeNonSelfBitmojiCount:(unsigned long long)arg1 ;
-(void)setCreativeNonSelfBitmojiIds:(NSString *)arg1 ;
-(void)setDraftId:(NSString *)arg1 ;
-(unsigned long long)creativeStickerCount;
-(unsigned long long)creativeBitmojiCount;
-(unsigned long long)creativeFriendmojiCount;
-(unsigned long long)creativeNonSelfBitmojiCount;
-(BOOL)isFromLineItemDraft;
-(NSString *)creativeNonSelfBitmojiIds;
-(NSString *)draftId;
-(void)setFromLineItemDraft:(BOOL)arg1 ;
-(void)dataController:(id)arg1 didFetchOffer:(id)arg2 success:(BOOL)arg3 validationErrors:(id)arg4 ;
-(void)dataController:(id)arg1 didSubmitGeofilterWithId:(id)arg2 success:(BOOL)arg3 approved:(BOOL)arg4 error:(id)arg5 ;
-(void)setCreativeTextBoxesCount:(unsigned long long)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(NSString *)creativeStickerIds;
-(void)setCreativeStickerIds:(NSString *)arg1 ;
-(NSString *)creativeTextBoxes;
-(void)setCreativeTextBoxes:(NSString *)arg1 ;
-(unsigned long long)creativeTextBoxesCount;
-(NSString *)referrer;
-(void)setLineItem:(SOJUUnlockablesOndemandLineItem *)arg1 ;
-(SOJUUnlockablesOndemandLineItem *)lineItem;
@end
