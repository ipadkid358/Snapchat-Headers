/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_group;
@class NSObject, NSString;

@interface SCArchivedChats : NSObject <NSCoding> {

	Ai _loaded;
	NSObject*<OS_dispatch_group> _loadedGroup;
	BOOL _hasUnviewedSnaps;
	BOOL _hasUnviewedChats;
	BOOL _hasUnviewedCash;
	BOOL _legacyPaginatedChatsFormat;
	NSString* _path;
	long long _unreadCount;

}

@property (nonatomic,readonly) BOOL legacyPaginatedChatsFormat;              //@synthesize legacyPaginatedChatsFormat=_legacyPaginatedChatsFormat - In the implementation block
@property (nonatomic,copy) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) long long unreadCount;                        //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,readonly) BOOL hasUnviewedSnaps;                        //@synthesize hasUnviewedSnaps=_hasUnviewedSnaps - In the implementation block
@property (nonatomic,readonly) BOOL hasUnviewedChats;                        //@synthesize hasUnviewedChats=_hasUnviewedChats - In the implementation block
@property (nonatomic,readonly) BOOL hasUnviewedCash;                         //@synthesize hasUnviewedCash=_hasUnviewedCash - In the implementation block
+(id)emptyArchive;
-(BOOL)hasUnviewedSnaps;
-(BOOL)hasUnviewedChats;
-(BOOL)hasUnviewedCash;
-(BOOL)legacyPaginatedChatsFormat;
-(id)initWithPath:(id)arg1 chats:(id)arg2 ;
-(id)initForUpgradingPaginatedChatsAtPath:(id)arg1 withUnreadCount:(long long)arg2 ;
-(void)waitUntilLoadedOnQueue:(id)arg1 loadedBlock:(/*^block*/id)arg2 ;
-(void)loadChatsAsync:(/*^block*/id)arg1 loadedBlock:(/*^block*/id)arg2 ;
-(void)removeArchivedFile;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(BOOL)loaded;
-(long long)unreadCount;
@end

