/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContextCardController.h>

@protocol SCContextCardActionDelegate;
@class NSString, SCContextLoadingCardViewCell;

@interface SCContextLoadingCardController : SCContextCardController {

	int _updateTrigger;
	NSString* _strategyOverride;
	BOOL _isLoaded;
	id<SCContextCardActionDelegate> _actionDelegate;
	SCContextLoadingCardViewCell* _loadingCardView;
	double _cardHeight;

}

@property (assign,nonatomic) double cardHeight;              //@synthesize cardHeight=_cardHeight - In the implementation block
-(CGSize)sizeForCell;
-(id)initWithId:(id)arg1 contextSession:(id)arg2 ;
-(void)attachCardView:(id)arg1 ;
-(id)cellTypeIdentifier;
-(void)_triggerUpdate;
-(double)cardHeight;
-(void)setCardHeight:(double)arg1 ;
-(id)initWithCard:(id)arg1 contextSession:(id)arg2 actionDelegate:(id)arg3 ;
-(void)setHidden:(BOOL)arg1 ;
-(Class)cellClass;
-(void)setupView;
@end

