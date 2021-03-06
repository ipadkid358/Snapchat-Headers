/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCFeedCellViewModel.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCFeedItem;

@interface SCFeedQuickAddCarouselCellViewModel : NSObject <SCFeedCellViewModel, NSCopying> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCFeedItem * feedItem; 
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)longPressActionModel;
-(BOOL)isEqualToDiffableObject:(id)arg1 ;
-(id)diffIdentifier;
-(id)tapActionModel;
-(id)doubleTapActionModel;
-(id)avatarTapActionModel;
-(id)avatarLongPressActionModel;
-(id)buttonTapActionModel;
-(id)reusableCellIdentifier;
-(BOOL)shouldDisableFeedSwiping;
-(BOOL)shouldAllowTapToRetryOnCell;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isGroupConversation;
-(BOOL)hasUnreadMessages;
-(SCFeedItem *)feedItem;
@end

