/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZZChannel;
@class NSDictionary, NSData, NSArray, NSURL;

@interface ZZArchive : NSObject {

	id<ZZChannel> _channel;
	NSDictionary* _entryWithFileName;
	NSData* _contents;
	NSArray* _entries;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSData * contents;              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(id)archiveWithURL:(id)arg1 error:(out id*)arg2 ;
+(id)archiveWithData:(id)arg1 error:(out id*)arg2 ;
+(id)sc_archiveDirectory:(id)arg1 error:(id*)arg2 ;
-(id)initWithChannel:(id)arg1 options:(id)arg2 error:(out id*)arg3 ;
-(BOOL)loadCanMiss:(BOOL)arg1 error:(out id*)arg2 ;
-(BOOL)unarchiveWithDirectoryURL:(id)arg1 error:(out id*)arg2 ;
-(id)entryWithFileName:(id)arg1 ;
-(BOOL)updateEntries:(id)arg1 error:(out id*)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(out id*)arg3 ;
-(NSURL *)URL;
-(NSData *)contents;
-(NSArray *)entries;
-(id)initWithURL:(id)arg1 options:(id)arg2 error:(out id*)arg3 ;
@end

