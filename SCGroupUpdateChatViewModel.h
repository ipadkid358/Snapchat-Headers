/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMessageChatViewModel.h>

@protocol SCChatGroup;
@class SCChatGroupUpdateContent, NSAttributedString;

@interface SCGroupUpdateChatViewModel : SCMessageChatViewModel {

	id<SCChatGroup> _group;
	SCChatGroupUpdateContent* _content;

}

@property (nonatomic,copy,readonly) SCChatGroupUpdateContent * content;                       //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedTextForLabel; 
+(id)_textForLabelType:(long long)arg1 modifiedByDisplay:(id)arg2 modifiedParitipantsDisplay:(id)arg3 selfDisplay:(id)arg4 isSelfModifier:(BOOL)arg5 isSelfModified:(BOOL)arg6 groupName:(id)arg7 ;
-(id)reusableCellIdentifier;
-(id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(NSAttributedString *)attributedTextForLabel;
-(double)payloadHeight;
-(id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3 ;
-(id)_getDisplayName:(id)arg1 ;
-(id)_getDisplayNames:(id)arg1 ;
-(double)bodyContentWidth;
-(BOOL)needsExtraSpacingOnTop;
-(double)payloadVerticalMargin;
-(BOOL)isEqual:(id)arg1 ;
-(SCChatGroupUpdateContent *)content;
@end

