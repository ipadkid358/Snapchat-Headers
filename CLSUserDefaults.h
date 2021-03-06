/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Snapchat/Snapchat-Structs.h>
@class NSURL, NSDictionary, NSMutableDictionary, NSObject;

@interface CLSUserDefaults : NSObject {

	BOOL _synchronizeWroteToDisk;
	NSURL* _directoryURL;
	NSURL* _fileURL;
	NSDictionary* _persistedDataDictionary;
	NSMutableDictionary* _dataDictionary;
	NSObject*<OS_dispatch_queue> _serialDictionaryQueue;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (assign,nonatomic) BOOL synchronizeWroteToDisk;                                       //@synthesize synchronizeWroteToDisk=_synchronizeWroteToDisk - In the implementation block
@property (nonatomic,copy,readonly) NSURL * directoryURL;                                       //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * persistedDataDictionary;                     //@synthesize persistedDataDictionary=_persistedDataDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * dataDictionary;                       //@synthesize dataDictionary=_dataDictionary - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDictionaryQueue;              //@synthesize serialDictionaryQueue=_serialDictionaryQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> synchronizationQueue;               //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
+(id)standardUserDefaults;
-(id)objectForKeyByMigratingFromNSUserDefaults:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialDictionaryQueue;
-(id)generateDirectoryURL;
-(id)getEscapedAppBundleIdentifier;
-(id)generateDirectoryURLForBaseURL:(id)arg1 hostAppBundleIdentifier:(id)arg2 ;
-(void)migrateFromNSUserDefaults:(id)arg1 ;
-(BOOL)synchronizeWroteToDisk;
-(void)setSynchronizeWroteToDisk:(BOOL)arg1 ;
-(NSDictionary *)persistedDataDictionary;
-(NSMutableDictionary *)dataDictionary;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSURL *)fileURL;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(id)loadDefaults;
-(NSURL *)directoryURL;
@end

