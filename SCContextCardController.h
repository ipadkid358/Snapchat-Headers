/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContextCardViewCellDelegate.h>

@protocol SCContextCardControllerDelegate;
@class NSString, SCContextSession, SCContextCardViewCell, SCContextCardActionExecutor;

@interface SCContextCardController : NSObject <SCContextCardViewCellDelegate> {

	BOOL _hidden;
	NSString* _id;
	SCContextSession* _contextSession;
	long long _sortOrder;
	SCContextCardViewCell* _cardView;
	id<SCContextCardControllerDelegate> _delegate;
	SCContextCardActionExecutor* _tapAction;
	SCContextCardActionExecutor* _longPressAction;

}

@property (nonatomic,readonly) NSString * id;                                                  //@synthesize id=_id - In the implementation block
@property (nonatomic,readonly) SCContextSession * contextSession;                              //@synthesize contextSession=_contextSession - In the implementation block
@property (assign,nonatomic) long long sortOrder;                                              //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                      //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic,__weak) SCContextCardViewCell * cardView;                          //@synthesize cardView=_cardView - In the implementation block
@property (assign,nonatomic,__weak) id<SCContextCardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCContextCardActionExecutor * tapAction;                          //@synthesize tapAction=_tapAction - In the implementation block
@property (nonatomic,retain) SCContextCardActionExecutor * longPressAction;                    //@synthesize longPressAction=_longPressAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeForCell;
-(SCContextSession *)contextSession;
-(id)initWithId:(id)arg1 contextSession:(id)arg2 ;
-(void)cardWasTapped:(id)arg1 ;
-(void)attachCardView:(id)arg1 ;
-(id)cellTypeIdentifier;
-(BOOL)_canHighlightCell;
-(void)cardWasLongPressed:(id)arg1 ;
-(void)cardBeganTouch:(id)arg1 ;
-(void)cardEndedTouch:(id)arg1 ;
-(void)cardCanceledTouch:(id)arg1 ;
-(void)cardWillBeReused:(id)arg1 ;
-(void)cleanUpViews;
-(void)setDelegate:(id<SCContextCardControllerDelegate>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)description;
-(id<SCContextCardControllerDelegate>)delegate;
-(Class)cellClass;
-(SCContextCardActionExecutor *)longPressAction;
-(BOOL)hidden;
-(long long)sortOrder;
-(void)setSortOrder:(long long)arg1 ;
-(SCContextCardViewCell *)cardView;
-(void)setCardView:(SCContextCardViewCell *)arg1 ;
-(void)setLongPressAction:(SCContextCardActionExecutor *)arg1 ;
-(NSString *)id;
-(void)setTapAction:(SCContextCardActionExecutor *)arg1 ;
-(SCContextCardActionExecutor *)tapAction;
@end

