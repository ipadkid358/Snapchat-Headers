/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMessageChatViewModel.h>

@protocol SCChatGroup;
@class NSMutableArray, SCChatGroupUpdateContent, NSAttributedString, NSArray;

@interface SCGroupCreateChatViewModel : SCMessageChatViewModel {

	id<SCChatGroup> _group;
	unsigned long long _numberOfBitmojisThatCanFit;
	BOOL _useOverflow;
	unsigned long long _numberOfBitmojisToShow;
	NSMutableArray* _groupUpdateParticipants;
	SCChatGroupUpdateContent* _content;

}

@property (nonatomic,copy,readonly) SCChatGroupUpdateContent * content;                       //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedTextForLabel; 
@property (nonatomic,copy,readonly) NSArray * groupUpdateParticipants; 
@property (nonatomic,readonly) unsigned long long numberOfBitmojisThatCanFit; 
@property (nonatomic,readonly) BOOL useOverflow; 
@property (nonatomic,readonly) unsigned long long numberOfBitmojisToShow; 
+(id)_textForLabelType:(long long)arg1 modifiedByDisplay:(id)arg2 modifiedParticipantsDisplay:(id)arg3 selfDisplay:(id)arg4 isSelfModifier:(BOOL)arg5 isSelfModified:(BOOL)arg6 groupName:(id)arg7 numberInOverflow:(unsigned long long)arg8 ;
-(id)reusableCellIdentifier;
-(double)calculateHeight;
-(id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(unsigned long long)numberOfBitmojisThatCanFit;
-(BOOL)useOverflow;
-(unsigned long long)numberOfBitmojisToShow;
-(NSAttributedString *)attributedTextForLabel;
-(NSArray *)groupUpdateParticipants;
-(void)imageForMember:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)payloadHeight;
-(BOOL)shouldAnimateCloseForActionMenu;
-(id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3 ;
-(void)_setUpBitmojis;
-(id)_getDisplayName:(id)arg1 ;
-(id)_getDisplayNames:(id)arg1 ;
-(id)_getParticipantFromUserId:(id)arg1 ;
-(BOOL)canScaleContentForActionMenu;
-(double)bodyContentWidth;
-(BOOL)needsExtraSpacingOnTop;
-(double)payloadVerticalMargin;
-(BOOL)isEqual:(id)arg1 ;
-(SCChatGroupUpdateContent *)content;
@end

