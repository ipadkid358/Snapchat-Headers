/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUMessageBody.h>
@class SOJUMedia, NSArray, SOJUSticker, SOJUSnapchatter, NSString, NSNumber, SOJUStoryShare, SOJUSnapMetadata, SOJUKhaleesiShare, SOJUNycShare, SOJUSearchShareStorySnap, SOJUSearchShareStory, SOJUMediaSave, SOJUMessageParcel;


@protocol SOJUMessageBody <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUMedia * media; 
@property (nonatomic,copy,readonly) NSArray * medias; 
@property (nonatomic,copy,readonly) SOJUSticker * sticker; 
@property (nonatomic,copy,readonly) SOJUSnapchatter * snapchatter; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSNumber * typeVersion; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,copy,readonly) NSArray * attributes; 
@property (nonatomic,copy,readonly) NSArray * mediaCardAttributes; 
@property (nonatomic,copy,readonly) NSString * storyTitle; 
@property (nonatomic,copy,readonly) SOJUStoryShare * storyShare; 
@property (nonatomic,copy,readonly) NSNumber * obfuscation; 
@property (nonatomic,copy,readonly) SOJUSnapMetadata * snapMetadata; 
@property (nonatomic,copy,readonly) SOJUKhaleesiShare * khaleesiShare; 
@property (nonatomic,copy,readonly) SOJUNycShare * nycShare; 
@property (nonatomic,copy,readonly) SOJUSearchShareStorySnap * searchShareStorySnap; 
@property (nonatomic,copy,readonly) SOJUSearchShareStory * searchShareStory; 
@property (nonatomic,copy,readonly) SOJUMediaSave * mediaSave; 
@property (nonatomic,copy,readonly) NSArray * replyMedias; 
@property (nonatomic,copy,readonly) NSArray * messagePallet; 
@property (nonatomic,copy,readonly) NSNumber * sendStartTimestamp; 
@property (nonatomic,copy,readonly) NSNumber * isScreenRecording; 
@property (nonatomic,copy,readonly) SOJUMessageParcel * messageParcel; 
@required
-(NSNumber *)sendStartTimestamp;
-(SOJUSnapMetadata *)snapMetadata;
-(NSArray *)replyMedias;
-(NSArray *)medias;
-(SOJUSnapchatter *)snapchatter;
-(NSArray *)mediaCardAttributes;
-(NSString *)storyTitle;
-(SOJUStoryShare *)storyShare;
-(NSNumber *)obfuscation;
-(SOJUKhaleesiShare *)khaleesiShare;
-(SOJUNycShare *)nycShare;
-(SOJUSearchShareStorySnap *)searchShareStorySnap;
-(SOJUSearchShareStory *)searchShareStory;
-(SOJUMediaSave *)mediaSave;
-(NSArray *)messagePallet;
-(NSNumber *)isScreenRecording;
-(SOJUMessageParcel *)messageParcel;
-(NSNumber *)typeVersion;
-(NSString *)type;
-(NSString *)text;
-(NSArray *)attributes;
-(SOJUMedia *)media;
-(SOJUSticker *)sticker;

@end


@class SOJUMedia, NSArray, SOJUSticker, SOJUSnapchatter, NSString, NSNumber, SOJUStoryShare, SOJUSnapMetadata, SOJUKhaleesiShare, SOJUNycShare, SOJUSearchShareStorySnap, SOJUSearchShareStory, SOJUMediaSave, SOJUMessageParcel;

@interface SOJUMessageBody : NSObject <SOJUMessageBody> {

	SOJUMedia* _media;
	NSArray* _medias;
	SOJUSticker* _sticker;
	SOJUSnapchatter* _snapchatter;
	NSString* _type;
	NSNumber* _typeVersion;
	NSString* _text;
	NSArray* _attributes;
	NSArray* _mediaCardAttributes;
	NSString* _storyTitle;
	SOJUStoryShare* _storyShare;
	NSNumber* _obfuscation;
	SOJUSnapMetadata* _snapMetadata;
	SOJUKhaleesiShare* _khaleesiShare;
	SOJUNycShare* _nycShare;
	SOJUSearchShareStorySnap* _searchShareStorySnap;
	SOJUSearchShareStory* _searchShareStory;
	SOJUMediaSave* _mediaSave;
	NSArray* _replyMedias;
	NSArray* _messagePallet;
	NSNumber* _sendStartTimestamp;
	NSNumber* _isScreenRecording;
	SOJUMessageParcel* _messageParcel;

}

@property (nonatomic,copy,readonly) SOJUMedia * media;                                            //@synthesize media=_media - In the implementation block
@property (nonatomic,copy,readonly) NSArray * medias;                                             //@synthesize medias=_medias - In the implementation block
@property (nonatomic,copy,readonly) SOJUSticker * sticker;                                        //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,copy,readonly) SOJUSnapchatter * snapchatter;                                //@synthesize snapchatter=_snapchatter - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * typeVersion;                                       //@synthesize typeVersion=_typeVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attributes;                                         //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaCardAttributes;                                //@synthesize mediaCardAttributes=_mediaCardAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyTitle;                                        //@synthesize storyTitle=_storyTitle - In the implementation block
@property (nonatomic,copy,readonly) SOJUStoryShare * storyShare;                                  //@synthesize storyShare=_storyShare - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * obfuscation;                                       //@synthesize obfuscation=_obfuscation - In the implementation block
@property (nonatomic,copy,readonly) SOJUSnapMetadata * snapMetadata;                              //@synthesize snapMetadata=_snapMetadata - In the implementation block
@property (nonatomic,copy,readonly) SOJUKhaleesiShare * khaleesiShare;                            //@synthesize khaleesiShare=_khaleesiShare - In the implementation block
@property (nonatomic,copy,readonly) SOJUNycShare * nycShare;                                      //@synthesize nycShare=_nycShare - In the implementation block
@property (nonatomic,copy,readonly) SOJUSearchShareStorySnap * searchShareStorySnap;              //@synthesize searchShareStorySnap=_searchShareStorySnap - In the implementation block
@property (nonatomic,copy,readonly) SOJUSearchShareStory * searchShareStory;                      //@synthesize searchShareStory=_searchShareStory - In the implementation block
@property (nonatomic,copy,readonly) SOJUMediaSave * mediaSave;                                    //@synthesize mediaSave=_mediaSave - In the implementation block
@property (nonatomic,copy,readonly) NSArray * replyMedias;                                        //@synthesize replyMedias=_replyMedias - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messagePallet;                                      //@synthesize messagePallet=_messagePallet - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sendStartTimestamp;                                //@synthesize sendStartTimestamp=_sendStartTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isScreenRecording;                                 //@synthesize isScreenRecording=_isScreenRecording - In the implementation block
@property (nonatomic,copy,readonly) SOJUMessageParcel * messageParcel;                            //@synthesize messageParcel=_messageParcel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)typeEnum;
-(int)typeVersionValue;
-(long long)sendStartTimestampValue;
-(NSNumber *)sendStartTimestamp;
-(SOJUSnapMetadata *)snapMetadata;
-(NSArray *)replyMedias;
-(int)obfuscationValue;
-(BOOL)isScreenRecordingValue;
-(NSArray *)medias;
-(SOJUSnapchatter *)snapchatter;
-(NSArray *)mediaCardAttributes;
-(NSString *)storyTitle;
-(SOJUStoryShare *)storyShare;
-(NSNumber *)obfuscation;
-(SOJUKhaleesiShare *)khaleesiShare;
-(SOJUNycShare *)nycShare;
-(SOJUSearchShareStorySnap *)searchShareStorySnap;
-(SOJUSearchShareStory *)searchShareStory;
-(SOJUMediaSave *)mediaSave;
-(NSArray *)messagePallet;
-(NSNumber *)isScreenRecording;
-(SOJUMessageParcel *)messageParcel;
-(id)initWithMedia:(id)arg1 medias:(id)arg2 sticker:(id)arg3 snapchatter:(id)arg4 type:(id)arg5 typeVersion:(id)arg6 text:(id)arg7 attributes:(id)arg8 mediaCardAttributes:(id)arg9 storyTitle:(id)arg10 storyShare:(id)arg11 obfuscation:(id)arg12 snapMetadata:(id)arg13 khaleesiShare:(id)arg14 nycShare:(id)arg15 searchShareStorySnap:(id)arg16 searchShareStory:(id)arg17 mediaSave:(id)arg18 replyMedias:(id)arg19 messagePallet:(id)arg20 sendStartTimestamp:(id)arg21 isScreenRecording:(id)arg22 messageParcel:(id)arg23 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(NSNumber *)typeVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(NSArray *)attributes;
-(id)toDictionary;
-(SOJUMedia *)media;
-(SOJUSticker *)sticker;
@end

