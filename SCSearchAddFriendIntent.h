/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchIntent.h>

@class Friend, NSDictionary, NSString;

@interface SCSearchAddFriendIntent : NSObject <SCSearchIntent> {

	BOOL _isFromQuickAction;
	Friend* _targetFriend;
	NSDictionary* _context;
	long long _addFriendSouceType;
	/*^block*/id _callbackBlock;

}

@property (nonatomic,readonly) Friend * targetFriend;                     //@synthesize targetFriend=_targetFriend - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long addFriendSouceType;              //@synthesize addFriendSouceType=_addFriendSouceType - In the implementation block
@property (nonatomic,readonly) BOOL isFromQuickAction;                    //@synthesize isFromQuickAction=_isFromQuickAction - In the implementation block
@property (nonatomic,copy,readonly) id callbackBlock;                     //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFromQuickAction;
-(id)initWithTargetFriend:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 isQuickAction:(BOOL)arg4 callbackBlock:(/*^block*/id)arg5 ;
-(Friend *)targetFriend;
-(long long)addFriendSouceType;
-(NSDictionary *)context;
-(id)callbackBlock;
@end

