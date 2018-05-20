/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMapCarouselVerticalScrollingView.h>
#import <Snapchat/SCMapPersonCarouselItemViewDelegate.h>
#import <Snapchat/SCMapLinkBitmojiCarouselItemViewDelegate.h>
#import <Snapchat/SCGroupManagerListener.h>
#import <Snapchat/SCMapCarouselInteractiveSubview.h>

@protocol SCMapPeopleVerticalScrollingViewDelegate;
@class SCUserSession, NSArray, NSString;

@interface SCMapPeopleVerticalScrollingView : SCMapCarouselVerticalScrollingView <SCMapPersonCarouselItemViewDelegate, SCMapLinkBitmojiCarouselItemViewDelegate, SCGroupManagerListener, SCMapCarouselInteractiveSubview> {

	SCUserSession* _userSession;
	id<SCMapPeopleVerticalScrollingViewDelegate> _delegate;
	NSArray* _people;

}

@property (assign,nonatomic,__weak) id<SCMapPeopleVerticalScrollingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * people;                                                            //@synthesize people=_people - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didJoinGroupWithId:(id)arg1 ;
-(void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2 ;
-(void)didBeginLeavingGroupWithId:(id)arg1 ;
-(void)didFinishLoadingGroups;
-(void)didChangeInfoForGroupWithId:(id)arg1 ;
-(void)didCompletelyLoseFocus;
-(id)initWithFrame:(CGRect)arg1 userSession:(id)arg2 ;
-(void)personCarouselItemViewDidTapStory:(id)arg1 ;
-(void)personCarouselItemViewDidTapProfile:(id)arg1 ;
-(void)personCarouselItemViewDidLongPressProfile:(id)arg1 ;
-(BOOL)_shouldShowChatOrCreateGroupButton;
-(BOOL)_isFooterIndexPath:(id)arg1 ;
-(void)_didTapChatOrCreateGroupButton;
-(void)linkBitmojiCarouselItemViewDidTapLinkBitmoji:(id)arg1 ;
-(BOOL)_indexPathShouldUseLinkBitmojiCell:(id)arg1 ;
-(void)setDelegate:(id<SCMapPeopleVerticalScrollingViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SCMapPeopleVerticalScrollingViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setPeople:(NSArray *)arg1 ;
-(NSArray *)people;
-(void)updateContentInset;
@end
