/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, SCInteractionEvent, NSString;

@interface SCFeedItem : NSObject {

	NSDate* _interactionTimestamp;
	NSArray* _sourceEvents;
	SCInteractionEvent* _displayEvent;
	SCFeedItem* _prev;
	SCFeedItem* _next;
	BOOL _actionable;
	BOOL _highPriority;
	BOOL _consumable;
	BOOL _anyFailed;
	long long _type;

}

@property (nonatomic,copy,readonly) NSDate * interactionTimestamp;                  //@synthesize interactionTimestamp=_interactionTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedId; 
@property (getter=hasConsumable,nonatomic,readonly) BOOL consumable;                //@synthesize consumable=_consumable - In the implementation block
@property (getter=hasAnyFailed,nonatomic,readonly) BOOL anyFailed;                  //@synthesize anyFailed=_anyFailed - In the implementation block
@property (nonatomic,readonly) BOOL canBeCleared; 
@property (nonatomic,readonly) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) SCInteractionEvent * displayEvent;              //@synthesize displayEvent=_displayEvent - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sourceEvents;                         //@synthesize sourceEvents=_sourceEvents - In the implementation block
-(id)_friendStories;
-(BOOL)hasUnviewedStories;
-(BOOL)hasActiveStories;
-(NSDate *)interactionTimestamp;
-(NSArray *)sourceEvents;
-(SCInteractionEvent *)displayEvent;
-(BOOL)hasAnyFailed;
-(BOOL)hasAnySending;
-(id)initWithSourceEvents:(id)arg1 ;
-(id)findInteractionEventWithCategory:(id)arg1 ;
-(id)initWithInteractionEvent:(id)arg1 ;
-(id)copyWithoutCategory:(id)arg1 ;
-(id)copyWithNewInteractionEvent:(id)arg1 ;
-(id)insertInLinkedList:(id)arg1 ;
-(void)replaceSelfInListWithItem:(id)arg1 ;
-(void)removeFromLinkedList;
-(BOOL)canBeCleared;
-(BOOL)hasConsumable;
-(BOOL)isInteractable;
-(id)snapIdToReplay;
-(BOOL)hasUnreadChatsOrUnopenSnaps;
-(BOOL)shouldSetLastPlayedSnapIdentifier;
-(BOOL)shouldClearLastPlayedSnapIdentifier;
-(BOOL)shouldShowAddFriendButton;
-(id)storyInteractionEvent;
-(id)latestStoryTimestamp;
-(unsigned long long)numberOfUnopenedSnaps;
-(unsigned long long)numberOfUnreadChats;
-(id)unopenedSnapIds;
-(id)displayNameWithHeavyBoldConsumableContent:(BOOL)arg1 ;
-(unsigned long long)numberOfConsumables;
-(id)next;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)displayName;
-(NSString *)feedId;
-(id)cachedDisplayName;
-(id)conversationId;
-(long long)messageType;
-(id)prev;
-(void)setPrev:(id)arg1 ;
-(void)setNext:(id)arg1 ;
@end

